#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ec2f37 _public_6ec2f37
#define public_6ec2f56 _public_6ec2f56
#define public_6ec2f5a _public_6ec2f5a
#define public_6ec2f62 _public_6ec2f62

PROC_DECLARE(0x6ec2f10, internal_6ec2f10, public_6ec2f10);
extern "C" NAKED register_t __cdecl internal_6ec2f10()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ec2f62
        test dword ptr ds : [esi+0x78], 0x3FFFFFFF
        jne public_6ec2f37
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x40]
        push eax
        call public_6f15940
        mov dword ptr ds : [esi+0x78], eax
        public_6ec2f37 : nop
        mov eax, dword ptr ds : [esi+0x78]
        test eax, 0x3FFFFFFF
        je public_6ec2f62
        cmp dword ptr ds : [edi+4], eax
        jne public_6ec2f62
        mov esi, dword ptr ds : [esi+0x74]
        mov eax, esi
        and eax, 0x3FFFFFFF
        je public_6ec2f56
        cmp dword ptr ds : [edi], esi
        je public_6ec2f5a
        public_6ec2f56 : nop
        test eax, eax
        jne public_6ec2f62
        public_6ec2f5a : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ec2f62 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec2f10)
    }
}

#undef public_6ec2f37
#undef public_6ec2f56
#undef public_6ec2f5a
#undef public_6ec2f62

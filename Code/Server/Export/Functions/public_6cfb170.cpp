#include "Server-PCH.h"


#define public_6cfb1b3 _public_6cfb1b3
#define public_6cfb1de _public_6cfb1de
#define public_6cfb1e3 _public_6cfb1e3
#define public_6cfb1e5 _public_6cfb1e5
#define public_6cfb237 _public_6cfb237
#define public_6cfb245 _public_6cfb245
#define public_6cfb24e _public_6cfb24e

PROC_DECLARE(0x6cfb170, internal_6cfb170, public_6cfb170);
extern "C" NAKED register_t __cdecl internal_6cfb170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x20
        push esi
        push edi
        push ecx
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d644f4]
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_6cfb24e
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x30], eax
        jle public_6cfb245
        mov esi, dword ptr ss : [esp+0x34]
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        public_6cfb1b3 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d644a8]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        mov ecx, edi
        call dword ptr ds : [eax+0x38]
        mov eax, ebp
        sub eax, 0
        je public_6cfb1e5
        dec eax
        je public_6cfb1de
        dec eax
        jne public_6cfb237
        cmp dword ptr ss : [esp+0x2C], 2
        jmp public_6cfb1e3
        public_6cfb1de : nop
        cmp dword ptr ss : [esp+0x2C], 1
        public_6cfb1e3 : nop
        jne public_6cfb237
        public_6cfb1e5 : nop
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+edx*4], eax
        mov ecx, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+ecx*4+0x28], edx
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+eax*4+0x50], ecx
        mov eax, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0xA
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[esi+edx*4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        inc dword ptr ds : [esi+0xF0]
        public_6cfb237 : nop
        mov eax, dword ptr ss : [esp+0x34]
        inc ebx
        cmp ebx, eax
        jl public_6cfb1b3
        pop ebp
        public_6cfb245 : nop
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 
        public_6cfb24e : nop
        pop edi
        mov eax, esi
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6cfb170)
    }
}

#undef public_6cfb1b3
#undef public_6cfb1de
#undef public_6cfb1e3
#undef public_6cfb1e5
#undef public_6cfb237
#undef public_6cfb245
#undef public_6cfb24e

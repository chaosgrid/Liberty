#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a9d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661a9ff _public_661a9ff
#define public_661aa07 _public_661aa07
#define public_661aa0d _public_661aa0d
#define public_661aa2d _public_661aa2d
#define public_661aa35 _public_661aa35
#define public_661aa40 _public_661aa40
#define public_661aa53 _public_661aa53

PROC_DECLARE(0x661a9d0, internal_661a9d0, public_661a9d0);
extern "C" NAKED register_t __cdecl internal_661a9d0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_661aa53
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov al, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+0xC], al
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        jne public_661a9ff
        xor eax, eax
        jmp public_661aa07
        public_661a9ff : nop
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 2
        public_661aa07 : nop
        test eax, eax
        jge public_661aa0d
        xor eax, eax
        public_661aa0d : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_66281dc
        mov dword ptr ds : [edi+0x10], eax
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp eax, edx
        je public_661aa40
        push ebx
        public_661aa2d : nop
        test ecx, ecx
        je public_661aa35
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_661aa35 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_661aa2d
        pop ebx
        public_661aa40 : nop
        mov dword ptr ds : [edi+0x14], ecx
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], eax
        pop esi
        public_661aa53 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x661a9d0)
    }
}

#undef public_661a9ff
#undef public_661aa07
#undef public_661aa0d
#undef public_661aa2d
#undef public_661aa35
#undef public_661aa40
#undef public_661aa53

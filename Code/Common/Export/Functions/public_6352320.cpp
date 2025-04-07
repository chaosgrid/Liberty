#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6352320);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);

#define public_635235d _public_635235d
#define public_635236f _public_635236f
#define public_635237d _public_635237d
#define public_63523b6 _public_63523b6

PROC_DECLARE(0x6352320, internal_6352320, public_6352320);
extern "C" NAKED register_t __cdecl internal_6352320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi+0xC]
        lea ecx, ds:[eax-1]
        push 8
        push eax
        inc edi
        mov dword ptr ds : [esi+4], ecx
        call public_6343f80
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0xC], eax
        lea eax, ds:[edi-1]
        add esp, 8
        and ebx, 0xFFFFFF
        test eax, eax
        jl public_635237d
        inc eax
        lea edi, ss:[ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        public_635235d : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_635236f
        mov edx, dword ptr ds : [edi-4]
        push edx
        push eax
        mov ecx, esi
        call public_63523d0
        public_635236f : nop
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 8
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_635235d
        public_635237d : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        xor eax, ebx
        mov edx, 0xFFFFFF
        and eax, edx
        xor eax, ecx
        test eax, 0xFF000000
        mov dword ptr ds : [esi+8], eax
        jne public_63523b6
        test ebp, ebp
        je public_63523b6
        push ebp
        call public_6343fb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        pop edi
        and eax, 0xFFFFFF
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_63523b6 : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        and eax, edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6352320)
    }
}

#undef public_635235d
#undef public_635236f
#undef public_635237d
#undef public_63523b6

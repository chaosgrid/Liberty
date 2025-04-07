#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a190);
CLANG_FORWARD_PROC_SYMBOL(public_620a450);
CLANG_FORWARD_PROC_SYMBOL(public_620a920);
CLANG_FORWARD_PROC_SYMBOL(public_620c3d0);
CLANG_FORWARD_PROC_SYMBOL(public_620cf20);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620cf4d _public_620cf4d
#define public_620cf59 _public_620cf59
#define public_620cf64 _public_620cf64
#define public_620cf6c _public_620cf6c
#define public_620cf70 _public_620cf70
#define public_620cf7f _public_620cf7f
#define public_620cfa7 _public_620cfa7
#define public_620cfb7 _public_620cfb7

PROC_DECLARE(0x620cf20, internal_620cf20, public_620cf20);
extern "C" NAKED register_t __cdecl internal_620cf20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+8]
        test ebx, ebx
        mov dword ptr ds : [esi], offset public_624bb60
        je public_620cfb7
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        jns public_620cf6c
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jg public_620cf4d
        push 0
        mov ecx, esi
        call public_620a450
        public_620cf4d : nop
        mov eax, dword ptr ds : [esi+4]
        test edi, edi
        lea ebx, ds:[eax+edi*8]
        jge public_620cf7f
        neg edi
        public_620cf59 : nop
        test ebx, ebx
        je public_620cf64
        mov ecx, ebx
        call public_620a920
        public_620cf64 : nop
        add ebx, 8
        dec edi
        jne public_620cf59
        jmp public_620cf7f
        public_620cf6c : nop
        test edi, edi
        jle public_620cf7f
        public_620cf70 : nop
        push 0
        mov ecx, ebx
        call public_620a190
        add ebx, 8
        dec edi
        jne public_620cf70
        public_620cf7f : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        test eax, eax
        pop edi
        je public_620cfa7
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0
        push ecx
        call public_620c3d0
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_620cfa7 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_620cfb7
        push esi
        call public_62460e0
        add esp, 4
        public_620cfb7 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620cf20)
    }
}

#undef public_620cf4d
#undef public_620cf59
#undef public_620cf64
#undef public_620cf6c
#undef public_620cf70
#undef public_620cf7f
#undef public_620cfa7
#undef public_620cfb7

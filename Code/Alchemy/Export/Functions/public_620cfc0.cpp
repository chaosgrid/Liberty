#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620a1b0);
CLANG_FORWARD_PROC_SYMBOL(public_620a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_620a930);
CLANG_FORWARD_PROC_SYMBOL(public_620c710);
CLANG_FORWARD_PROC_SYMBOL(public_620cfc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620cfed _public_620cfed
#define public_620cff9 _public_620cff9
#define public_620d004 _public_620d004
#define public_620d00c _public_620d00c
#define public_620d010 _public_620d010
#define public_620d01f _public_620d01f
#define public_620d047 _public_620d047
#define public_620d057 _public_620d057

PROC_DECLARE(0x620cfc0, internal_620cfc0, public_620cfc0);
extern "C" NAKED register_t __cdecl internal_620cfc0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+8]
        test ebx, ebx
        mov dword ptr ds : [esi], offset public_624bbb4
        je public_620d057
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        inc edi
        jns public_620d00c
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jg public_620cfed
        push 0
        mov ecx, esi
        call public_620a5c0
        public_620cfed : nop
        mov eax, dword ptr ds : [esi+4]
        test edi, edi
        lea ebx, ds:[eax+edi*8]
        jge public_620d01f
        neg edi
        public_620cff9 : nop
        test ebx, ebx
        je public_620d004
        mov ecx, ebx
        call public_620a930
        public_620d004 : nop
        add ebx, 8
        dec edi
        jne public_620cff9
        jmp public_620d01f
        public_620d00c : nop
        test edi, edi
        jle public_620d01f
        public_620d010 : nop
        push 0
        mov ecx, ebx
        call public_620a1b0
        add ebx, 8
        dec edi
        jne public_620d010
        public_620d01f : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        test eax, eax
        pop edi
        je public_620d047
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push 0
        push ecx
        call public_620c710
        add esp, 0xC
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0x10], 0
        public_620d047 : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_620d057
        push esi
        call public_62460e0
        add esp, 4
        public_620d057 : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x620cfc0)
    }
}

#undef public_620cfed
#undef public_620cff9
#undef public_620d004
#undef public_620d00c
#undef public_620d010
#undef public_620d01f
#undef public_620d047
#undef public_620d057

#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebdd70);

#define public_6ebdd90 _public_6ebdd90
#define public_6ebddad _public_6ebddad
#define public_6ebddc0 _public_6ebddc0
#define public_6ebddd3 _public_6ebddd3
#define public_6ebdde5 _public_6ebdde5
#define public_6ebddf5 _public_6ebddf5
#define public_6ebde04 _public_6ebde04
#define public_6ebde14 _public_6ebde14
#define public_6ebde25 _public_6ebde25
#define public_6ebde3d _public_6ebde3d

PROC_DECLARE(0x6ebdd70, internal_6ebdd70, public_6ebdd70);
extern "C" NAKED register_t __cdecl internal_6ebdd70()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_6ed101c]
        push ebp
        mov ebp, dword ptr ds : [public_6ed1020]
        push esi
        push edi
        mov esi, offset public_6ed5fa0
        mov dword ptr ss : [esp+0x10], 0xA
        xor edi, edi
        public_6ebdd90 : nop
        sub esi, 0x4C
        mov dword ptr ds : [esi-0x28], edi
        mov dword ptr ds : [esi-0x24], edi
        mov dword ptr ds : [esi-0x20], edi
        mov dword ptr ds : [esi-0x1C], edi
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        je public_6ebddad
        dec eax
        je public_6ebddd3
        dec eax
        jne public_6ebddc0
        public_6ebddad : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_6ebddc0
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        mov edi, edi
        public_6ebddc0 : nop
        mov dword ptr ds : [esi+0x14], edi
        mov eax, dword ptr ds : [esi-4]
        sub eax, 5
        je public_6ebddf5
        dec eax
        je public_6ebdde5
        dec eax
        je public_6ebddf5
        jmp public_6ebde04
        public_6ebddd3 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        mov dword ptr ds : [esi+0x14], edi
        je public_6ebddc0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebddc0
        public_6ebdde5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        mov dword ptr ds : [esi], edi
        je public_6ebde04
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_6ebde04
        public_6ebddf5 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_6ebde04
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi], edi
        public_6ebde04 : nop
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [esi-0x18]
        sub eax, 5
        je public_6ebde14
        dec eax
        je public_6ebde3d
        dec eax
        jne public_6ebde25
        public_6ebde14 : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        je public_6ebde25
        push eax
        push edi
        call ebp
        push eax
        call ebx
        mov dword ptr ds : [esi-0x14], edi
        public_6ebde25 : nop
        mov eax, dword ptr ss : [esp+0x10]
        dec eax
        mov dword ptr ds : [esi-0x14], edi
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ebdd90
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ebde3d : nop
        mov eax, dword ptr ds : [esi-0x14]
        cmp eax, edi
        mov dword ptr ds : [esi-0x14], edi
        je public_6ebde25
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6ebde25
        UNREACHABLE_TRAP(0x6ebdd70)
    }
}

#undef public_6ebdd90
#undef public_6ebddad
#undef public_6ebddc0
#undef public_6ebddd3
#undef public_6ebdde5
#undef public_6ebddf5
#undef public_6ebde04
#undef public_6ebde14
#undef public_6ebde25
#undef public_6ebde3d

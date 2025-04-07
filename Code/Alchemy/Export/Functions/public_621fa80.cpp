#include "Alchemy-PCH.h"


#define public_621fa9f _public_621fa9f
#define public_621faae _public_621faae
#define public_621fae0 _public_621fae0
#define public_621fb02 _public_621fb02
#define public_621fb24 _public_621fb24
#define public_621fb28 _public_621fb28
#define public_621fb33 _public_621fb33
#define public_621fb3d _public_621fb3d

PROC_DECLARE(0x621fa80, internal_621fa80, public_621fa80);
extern "C" NAKED register_t __cdecl internal_621fa80()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+0x10]
        mov esi, dword ptr ds : [edi+0xC]
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_621fb33
        mov ebx, dword ptr ss : [esp+0x1C]
        public_621fa9f : nop
        mov eax, dword ptr ds : [edi+0x18]
        test eax, eax
        je public_621faae
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [eax]
        cmp edx, ebp
        je public_621fb28
        public_621faae : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        jne public_621fb24
        cmp ebx, 7
        je public_621fb3d
        test bl, 1
        je public_621fae0
        mov byte ptr ss : [esp+0x18], al
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x94]
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        jne public_621fb3d
        public_621fae0 : nop
        test bl, 2
        je public_621fb02
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], 0
        push ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x98]
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        jne public_621fb3d
        public_621fb02 : nop
        test bl, 4
        je public_621fb24
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], 0
        push ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x90]
        mov al, byte ptr ss : [esp+0x18]
        test al, al
        jne public_621fb3d
        public_621fb24 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_621fb28 : nop
        add esi, 0x10
        cmp esi, ecx
        jne public_621fa9f
        public_621fb33 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_621fb3d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x621fa80)
    }
}

#undef public_621fa9f
#undef public_621faae
#undef public_621fae0
#undef public_621fb02
#undef public_621fb24
#undef public_621fb28
#undef public_621fb33
#undef public_621fb3d

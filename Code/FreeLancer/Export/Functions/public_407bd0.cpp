#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_407c18 _public_407c18
#define public_407c34 _public_407c34
#define public_407c57 _public_407c57
#define public_407cad _public_407cad
#define public_407cd9 _public_407cd9
#define public_407d00 _public_407d00
#define public_407d08 _public_407d08
#define public_407d18 _public_407d18

PROC_DECLARE(0x407bd0, internal_407bd0, public_407bd0);
extern "C" NAKED register_t __cdecl internal_407bd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov ebp, ecx
        mov bl, 1
        call public_406dc0
        test al, al
        jne public_407d18
/*FIXUP push offset public_5c7998 @0x407be9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7998
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_407c57
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        jne public_407c18
        pop esi
        mov dword ptr ss : [ebp+0x5C], eax
        mov byte ptr ss : [ebp+0x60], al
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        public_407c18 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x60]
        jb public_407c34
        mov eax, 0x1F
        public_407c34 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp+0x60], 0
        pop esi
        mov dword ptr ss : [ebp+0x5C], eax
        pop ebp
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_407c57 : nop
        push offset public_5c7988 @0x407c57*/
  FIXUP public_407c57 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7988
        call dword ptr ds : [public_5c6cf4]
        test al, al
        jne public_407d08
/*FIXUP push offset public_5c797c @0x407c6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c797c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        jne public_407d08
/*FIXUP push offset public_5c7970 @0x407c7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7970
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_407cad
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop esi
        mov dword ptr ss : [ebp+0x54], eax
        pop ebp
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_407cad : nop
        push offset public_5c7964 @0x407cad*/
  FIXUP public_407cad : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7964
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_407cd9
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop esi
        mov dword ptr ss : [ebp+0x58], eax
        pop ebp
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_407cd9 : nop
        push offset public_5c7950 @0x407cd9*/
  FIXUP public_407cd9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7950
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_407d00
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6034]
        pop esi
        mov byte ptr ss : [ebp+0x84], al
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        public_407d00 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_407d08 : nop
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6d00]
        mov dword ptr ss : [ebp+0x80], eax
        public_407d18 : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x407bd0)
    }
}

#undef public_407c18
#undef public_407c34
#undef public_407c57
#undef public_407cad
#undef public_407cd9
#undef public_407d00
#undef public_407d08
#undef public_407d18

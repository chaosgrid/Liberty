#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600c36);
CLANG_FORWARD_PROC_SYMBOL(public_6600d84);

#define public_6600c4c _public_6600c4c
#define public_6600c74 _public_6600c74
#define public_6600c78 _public_6600c78
#define public_6600c9e _public_6600c9e
#define public_6600cb5 _public_6600cb5
#define public_6600cc6 _public_6600cc6
#define public_6600ccb _public_6600ccb
#define public_6600cdb _public_6600cdb
#define public_6600cde _public_6600cde

PROC_DECLARE(0x6600c36, internal_6600c36, public_6600c36);
extern "C" NAKED register_t __cdecl internal_6600c36()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6600c4c
        cmp dword ptr ds : [public_66033ec], eax
        jle public_6600c74
        dec dword ptr ds : [public_66033ec]
        public_6600c4c : nop
        mov ecx, dword ptr ds : [public_660104c]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6603b04], ecx
        jne public_6600c9e
        push 0x80
        call dword ptr ds : [public_6601048]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6603b10], eax
        jne public_6600c78
        public_6600c74 : nop
        xor eax, eax
        jmp public_6600cde
        public_6600c78 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6603b10]
/*FIXUP push offset public_6602014 @0x6600c80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602014
/*FIXUP push offset public_6602000 @0x6600c85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602000
        mov dword ptr ds : [public_6603b0c], eax
        call public_6600d84
        inc dword ptr ds : [public_66033ec]
        pop ecx
        pop ecx
        jmp public_6600cdb
        public_6600c9e : nop
        test eax, eax
        jne public_6600cdb
        mov eax, dword ptr ds : [public_6603b10]
        test eax, eax
        je public_6600cdb
        mov ecx, dword ptr ds : [public_6603b0c]
        push esi
        lea esi, ds:[ecx-4]
        public_6600cb5 : nop
        cmp esi, eax
        jb public_6600ccb
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6600cc6
        call ecx
        mov eax, dword ptr ds : [public_6603b10]
        public_6600cc6 : nop
        sub esi, 4
        jmp public_6600cb5
        public_6600ccb : nop
        push eax
        call dword ptr ds : [public_6601074]
        and dword ptr ds : [public_6603b10], 0
        pop ecx
        pop esi
        public_6600cdb : nop
        push 1
        pop eax
        public_6600cde : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6600c36)
    }
}

#undef public_6600c4c
#undef public_6600c74
#undef public_6600c78
#undef public_6600c9e
#undef public_6600cb5
#undef public_6600cc6
#undef public_6600ccb
#undef public_6600cdb
#undef public_6600cde

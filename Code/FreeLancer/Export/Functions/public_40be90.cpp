#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);

#define public_40bee0 _public_40bee0
#define public_40bf0b _public_40bf0b
#define public_40bf36 _public_40bf36
#define public_40bf61 _public_40bf61
#define public_40bf8c _public_40bf8c
#define public_40bfb7 _public_40bfb7
#define public_40bfe2 _public_40bfe2
#define public_40c00d _public_40c00d
#define public_40c038 _public_40c038
#define public_40c063 _public_40c063
#define public_40c08e _public_40c08e
#define public_40c0bc _public_40c0bc
#define public_40c0ea _public_40c0ea
#define public_40c118 _public_40c118
#define public_40c146 _public_40c146
#define public_40c174 _public_40c174
#define public_40c19a _public_40c19a
#define public_40c1c0 _public_40c1c0
#define public_40c1e6 _public_40c1e6
#define public_40c20c _public_40c20c
#define public_40c232 _public_40c232
#define public_40c258 _public_40c258
#define public_40c27e _public_40c27e
#define public_40c283 _public_40c283

PROC_DECLARE(0x40be90, internal_40be90, public_40be90);
extern "C" NAKED register_t __cdecl internal_40be90()
{
    __asm
    {
        push ecx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push esi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x13], 1
        call public_406dc0
        test al, al
        jne public_40c283
        mov edi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c8230 @0x40beb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8230
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_40bee0
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x54], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40bee0 : nop
        push offset public_5c821c @0x40bee0*/
  FIXUP public_40bee0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c821c
        call edi
        test al, al
        mov ecx, esi
        je public_40bf0b
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x58], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40bf0b : nop
        push offset public_5c8208 @0x40bf0b*/
  FIXUP public_40bf0b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8208
        call edi
        test al, al
        mov ecx, esi
        je public_40bf36
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x5C], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40bf36 : nop
        push offset public_5c81f8 @0x40bf36*/
  FIXUP public_40bf36 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c81f8
        call edi
        test al, al
        mov ecx, esi
        je public_40bf61
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x60], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40bf61 : nop
        push offset public_5c81e4 @0x40bf61*/
  FIXUP public_40bf61 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c81e4
        call edi
        test al, al
        mov ecx, esi
        je public_40bf8c
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x64], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40bf8c : nop
        push offset public_5c81d4 @0x40bf8c*/
  FIXUP public_40bf8c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c81d4
        call edi
        test al, al
        mov ecx, esi
        je public_40bfb7
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x68], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40bfb7 : nop
        push offset public_5c81c4 @0x40bfb7*/
  FIXUP public_40bfb7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c81c4
        call edi
        test al, al
        mov ecx, esi
        je public_40bfe2
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x6C], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40bfe2 : nop
        push offset public_5c81b4 @0x40bfe2*/
  FIXUP public_40bfe2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c81b4
        call edi
        test al, al
        mov ecx, esi
        je public_40c00d
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x70], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c00d : nop
        push offset public_5c81a4 @0x40c00d*/
  FIXUP public_40c00d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c81a4
        call edi
        test al, al
        mov ecx, esi
        je public_40c038
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x74], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c038 : nop
        push offset public_5c8194 @0x40c038*/
  FIXUP public_40c038 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8194
        call edi
        test al, al
        mov ecx, esi
        je public_40c063
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x78], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c063 : nop
        push offset public_5c8184 @0x40c063*/
  FIXUP public_40c063 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8184
        call edi
        test al, al
        mov ecx, esi
        je public_40c08e
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x7C], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c08e : nop
        push offset public_5c8174 @0x40c08e*/
  FIXUP public_40c08e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8174
        call edi
        test al, al
        mov ecx, esi
        je public_40c0bc
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x80], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c0bc : nop
        push offset public_5c8164 @0x40c0bc*/
  FIXUP public_40c0bc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8164
        call edi
        test al, al
        mov ecx, esi
        je public_40c0ea
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x84], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c0ea : nop
        push offset public_5c814c @0x40c0ea*/
  FIXUP public_40c0ea : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c814c
        call edi
        test al, al
        mov ecx, esi
        je public_40c118
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x88], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c118 : nop
        push offset public_5c8138 @0x40c118*/
  FIXUP public_40c118 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8138
        call edi
        test al, al
        mov ecx, esi
        je public_40c146
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x8C], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c146 : nop
        push offset public_5c8124 @0x40c146*/
  FIXUP public_40c146 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8124
        call edi
        test al, al
        mov ecx, esi
        je public_40c174
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        pop edi
        mov dword ptr ss : [ebp+0x90], eax
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c174 : nop
        push offset public_5c8110 @0x40c174*/
  FIXUP public_40c174 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8110
        call edi
        test al, al
        mov ecx, esi
        je public_40c19a
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x94]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c19a : nop
        push offset public_5c80fc @0x40c19a*/
  FIXUP public_40c19a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c80fc
        call edi
        test al, al
        mov ecx, esi
        je public_40c1c0
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x98]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c1c0 : nop
        push offset public_5c80e8 @0x40c1c0*/
  FIXUP public_40c1c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c80e8
        call edi
        test al, al
        mov ecx, esi
        je public_40c1e6
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0x9C]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c1e6 : nop
        push offset public_5c80d4 @0x40c1e6*/
  FIXUP public_40c1e6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c80d4
        call edi
        test al, al
        mov ecx, esi
        je public_40c20c
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0xA0]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c20c : nop
        push offset public_5c80c4 @0x40c20c*/
  FIXUP public_40c20c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c80c4
        call edi
        test al, al
        mov ecx, esi
        je public_40c232
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0xA4]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c232 : nop
        push offset public_5c80b8 @0x40c232*/
  FIXUP public_40c232 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c80b8
        call edi
        test al, al
        mov ecx, esi
        je public_40c258
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0xAC]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
/*FIXUP public_40c258 : nop
        push offset public_5c80ac @0x40c258*/
  FIXUP public_40c258 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c80ac
        call edi
        test al, al
        je public_40c27e
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [ebp+0xA8]
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        public_40c27e : nop
        mov byte ptr ss : [esp+0xF], 0
        public_40c283 : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x40be90)
    }
}

#undef public_40bee0
#undef public_40bf0b
#undef public_40bf36
#undef public_40bf61
#undef public_40bf8c
#undef public_40bfb7
#undef public_40bfe2
#undef public_40c00d
#undef public_40c038
#undef public_40c063
#undef public_40c08e
#undef public_40c0bc
#undef public_40c0ea
#undef public_40c118
#undef public_40c146
#undef public_40c174
#undef public_40c19a
#undef public_40c1c0
#undef public_40c1e6
#undef public_40c20c
#undef public_40c232
#undef public_40c258
#undef public_40c27e
#undef public_40c283

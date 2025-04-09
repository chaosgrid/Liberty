#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_47ba90);
CLANG_FORWARD_PROC_SYMBOL(public_47c740);
CLANG_FORWARD_PROC_SYMBOL(public_47e440);
CLANG_FORWARD_PROC_SYMBOL(public_47f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_53e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_4b6e85 _public_4b6e85
#define public_4b6e9a _public_4b6e9a
#define public_4b6ea3 _public_4b6ea3
#define public_4b6eb3 _public_4b6eb3
#define public_4b6eb8 _public_4b6eb8
#define public_4b6ebe _public_4b6ebe
#define public_4b6ee0 _public_4b6ee0
#define public_4b6f24 _public_4b6f24
#define public_4b6f2d _public_4b6f2d
#define public_4b6f3f _public_4b6f3f
#define public_4b6f48 _public_4b6f48
#define public_4b6f4a _public_4b6f4a
#define public_4b6f6e _public_4b6f6e
#define public_4b6f76 _public_4b6f76
#define public_4b6fb9 _public_4b6fb9
#define public_4b6fda _public_4b6fda
#define public_4b6fe4 _public_4b6fe4
#define public_4b700a _public_4b700a
#define public_4b7017 _public_4b7017
#define public_4b7024 _public_4b7024
#define public_4b7040 _public_4b7040

PROC_DECLARE(0x4b6e30, internal_4b6e30, public_4b6e30);
extern "C" NAKED register_t __cdecl internal_4b6e30()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        call public_54baf0
        test eax, eax
        je public_4b6e85
/*FIXUP push offset public_5d0234 @0x4b6e3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4b6e85
/*FIXUP push offset public_5d0228 @0x4b6e50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_4b6e85
        call public_45a470
        test al, al
        jne public_4b6e85
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_4b6e85
        call public_42d730
        test al, al
        jne public_4b6e85
        call public_41a3e0
        test al, al
        je public_4b6e9a
        public_4b6e85 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push 0
        push 0xEF02
        mov ecx, esi
        call dword ptr ds : [eax+0x5C]
        pop esi
        add esp, 0xC
        ret 
        public_4b6e9a : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        push ebx
        push edi
        je public_4b6ebe
        public_4b6ea3 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov edi, dword ptr ds : [ecx+8]
        je public_4b6eb3
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        jmp public_4b6eb8
        public_4b6eb3 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        public_4b6eb8 : nop
        test edi, edi
        mov ecx, edi
        jne public_4b6ea3
        public_4b6ebe : nop
        mov eax, dword ptr ds : [esi+0x97C]
        xor ecx, ecx
        mov dword ptr ss : [esp+0xC], ecx
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_4b6f2d
        push ebp
        lea esp, ss:[esp]
        public_4b6ee0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        mov ebx, dword ptr ds : [edi+0xC]
        push 0
        push 0
        push 0
        push 1
        push 0
        push 0
        push 0
        push 0
        push 0
        push eax
        lea ebp, ds:[edi+8]
        push ebp
        mov ecx, esi
        call public_47e440
        push eax
        push ebx
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, esi
        call public_47c740
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        jne public_4b6f24
        test al, al
        je public_4b6f24
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], ecx
        public_4b6f24 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x18]
        jne public_4b6ee0
        pop ebp
        public_4b6f2d : nop
        mov al, byte ptr ds : [esi+0x4E0]
        test al, al
        je public_4b6f3f
        mov eax, dword ptr ds : [esi+0x348]
        jmp public_4b6f4a
        public_4b6f3f : nop
        test ecx, ecx
        je public_4b6f48
        mov eax, dword ptr ds : [ecx+4]
        jmp public_4b6f4a
        public_4b6f48 : nop
        xor eax, eax
        public_4b6f4a : nop
        push 0
        push eax
        mov ecx, esi
        call public_47ba90
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov ecx, esi
        call public_47f3e0
        mov al, byte ptr ds : [esi+0x4E1]
        test al, al
        je public_4b6f6e
        xor al, al
        jmp public_4b6f76
        public_4b6f6e : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+0x4E2]
        public_4b6f76 : nop
        push eax
        lea ecx, ds:[esi+0x330]
        call public_53e4a0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x3C8]
        or edi, 0xFFFFFFFF
        cmp eax, ecx
        je public_4b7017
        mov ecx, dword ptr ds : [esi+0x3D0]
        test ecx, ecx
        mov dword ptr ds : [esi+0x3A4], edi
        je public_4b6fb9
        mov edx, dword ptr ds : [ecx]
        dec eax
        push eax
        push 0
        push 0x37
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0xC]
        public_4b6fb9 : nop
        mov ecx, dword ptr ds : [esi+0x3C4]
        test ecx, ecx
        je public_4b700a
        add ecx, 5
        cmp ecx, eax
        jbe public_4b700a
        cmp eax, 5
        jbe public_4b6fda
        lea ecx, ds:[eax-5]
        mov dword ptr ds : [esi+0x3C4], ecx
        jmp public_4b6fe4
        public_4b6fda : nop
        mov dword ptr ds : [esi+0x3C4], 0
        public_4b6fe4 : nop
        mov ecx, dword ptr ds : [esi+0x3D0]
        test ecx, ecx
        je public_4b700a
        mov eax, dword ptr ds : [esi+0x3C4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[eax+eax*4]
        push 0
        shl eax, 1
        push eax
        push 0x38
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ss : [esp+0xC]
        public_4b700a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+0x3C8], eax
        call dword ptr ds : [edx+0x2C]
        public_4b7017 : nop
        lea ecx, ds:[esi+0x474]
        mov edx, 5
        mov bl, 0xFC
        public_4b7024 : nop
        mov eax, dword ptr ds : [ecx]
        and byte ptr ds : [eax+0x6C], bl
        add ecx, 4
        dec edx
        jne public_4b7024
        cmp dword ptr ds : [esi+0x3A4], edi
        pop edi
        pop ebx
        jne public_4b7040
        mov byte ptr ds : [esi+0x4E0], 1
        public_4b7040 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4b6e30)
    }
}

#undef public_4b6e85
#undef public_4b6e9a
#undef public_4b6ea3
#undef public_4b6eb3
#undef public_4b6eb8
#undef public_4b6ebe
#undef public_4b6ee0
#undef public_4b6f24
#undef public_4b6f2d
#undef public_4b6f3f
#undef public_4b6f48
#undef public_4b6f4a
#undef public_4b6f6e
#undef public_4b6f76
#undef public_4b6fb9
#undef public_4b6fda
#undef public_4b6fe4
#undef public_4b700a
#undef public_4b7017
#undef public_4b7024
#undef public_4b7040

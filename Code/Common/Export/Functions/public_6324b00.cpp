#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_631fa40);
CLANG_FORWARD_PROC_SYMBOL(public_631fd00);
CLANG_FORWARD_PROC_SYMBOL(public_6324b00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396fc6);

#define public_6324b4e _public_6324b4e
#define public_6324b5d _public_6324b5d
#define public_6324bbb _public_6324bbb
#define public_6324bc5 _public_6324bc5
#define public_6324bd7 _public_6324bd7
#define public_6324c10 _public_6324c10
#define public_6324c21 _public_6324c21
#define public_6324c60 _public_6324c60
#define public_6324c71 _public_6324c71
#define public_6324cb8 _public_6324cb8
#define public_6324cc9 _public_6324cc9

PROC_DECLARE(0x6324b00, internal_6324b00, public_6324b00);
extern "C" NAKED register_t __cdecl internal_6324b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396fc6 @0x6324b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396fc6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0xB0]
        mov edx, eax
        sub edx, ecx
        mov edx, dword ptr ss : [esp+0x140]
        mov dword ptr ss : [esp+0x14], 3
        jns public_6324bbb
        sub ecx, edx
        jns public_6324b4e
        lea eax, ss:[esp+0xB0]
        jmp public_6324b5d
        public_6324b4e : nop
        sub eax, edx
        lea eax, ss:[esp+0x140]
        js public_6324b5d
        lea eax, ss:[esp+0x20]
        public_6324b5d : nop
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x1C]
        add eax, 4
        mov dword ptr ds : [esi], ecx
        push eax
        lea ecx, ds:[esi+4]
        call public_631fd00
        mov dword ptr ss : [esp+4], 1
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x14], 2
        call public_631fa40
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x14], 1
        call public_631fa40
        lea ecx, ss:[esp+0x144]
        mov byte ptr ss : [esp+0x14], 0
        call public_631fa40
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        public_6324bbb : nop
        sub eax, edx
        jns public_6324bc5
        lea eax, ss:[esp+0x20]
        jmp public_6324bd7
        public_6324bc5 : nop
        sub ecx, edx
        lea eax, ss:[esp+0x140]
        js public_6324bd7
        lea eax, ss:[esp+0xB0]
        public_6324bd7 : nop
        mov edx, dword ptr ds : [eax]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        add eax, 4
        push eax
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], edx
        call public_631fd00
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+8], 1
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0xB0]
        test eax, eax
        mov byte ptr ss : [esp+0x18], 4
        je public_6324c21
        lea esp, ss:[esp]
        public_6324c10 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_6324c10
        public_6324c21 : nop
        lea ecx, ss:[esp+0xA0]
        call public_6269110
        lea ecx, ss:[esp+0x50]
        call public_630e210
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x18], 2
        call public_630e210
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0xC], ecx
        mov eax, dword ptr ss : [esp+0x140]
        test eax, eax
        mov byte ptr ss : [esp+0x18], 5
        je public_6324c71
        nop 
        public_6324c60 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_6324c60
        public_6324c71 : nop
        lea ecx, ss:[esp+0x130]
        call public_6269110
        lea ecx, ss:[esp+0xE0]
        call public_630e210
        lea ecx, ss:[esp+0xC8]
        mov byte ptr ss : [esp+0x18], 1
        call public_630e210
        lea edx, ss:[esp+0x148]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ss : [esp+0x1D0]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 6
        je public_6324cc9
        public_6324cb8 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_6324cb8
        public_6324cc9 : nop
        lea ecx, ss:[esp+0x1C0]
        call public_6269110
        lea ecx, ss:[esp+0x170]
        call public_630e210
        lea ecx, ss:[esp+0x158]
        mov byte ptr ss : [esp+0x18], 0
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6324b00)
    }
}

#undef public_6324b4e
#undef public_6324b5d
#undef public_6324bbb
#undef public_6324bc5
#undef public_6324bd7
#undef public_6324c10
#undef public_6324c21
#undef public_6324c60
#undef public_6324c71
#undef public_6324cb8
#undef public_6324cc9

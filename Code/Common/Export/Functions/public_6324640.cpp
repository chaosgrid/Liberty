#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631fa40);
CLANG_FORWARD_PROC_SYMBOL(public_6324550);
CLANG_FORWARD_PROC_SYMBOL(public_6324570);
CLANG_FORWARD_PROC_SYMBOL(public_6324640);
CLANG_FORWARD_PROC_SYMBOL(public_6324b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6396f0c);

#define public_6324690 _public_6324690
#define public_6324724 _public_6324724
#define public_6324731 _public_6324731
#define public_6324741 _public_6324741
#define public_6324796 _public_6324796
#define public_63247ea _public_63247ea
#define public_63247f3 _public_63247f3
#define public_6324816 _public_6324816

PROC_DECLARE(0x6324640, internal_6324640, public_6324640);
extern "C" NAKED register_t __cdecl internal_6324640()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396f0c @0x6324648*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396f0c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x12C
        push ebx
        mov ebx, dword ptr ss : [esp+0x144]
        push ebp
        mov ebp, dword ptr ss : [esp+0x144]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push esi
        mov esi, edx
        cmp esi, 0x10
        push edi
        jle public_6324816
        lea ecx, ds:[ecx]
        public_6324690 : nop
        sub esp, 0x90
        lea edx, ds:[ebx-0x90]
        mov ecx, esp
        mov dword ptr ss : [esp+0xA4], esp
        push edx
        call public_6324570
        mov eax, esi
        cdq 
        sub eax, edx
        sar eax, 1
        lea eax, ds:[eax+eax*8]
        sub esp, 0x90
        shl eax, 4
        add eax, ebp
        mov ecx, esp
        mov dword ptr ss : [esp+0x138], esp
        push eax
        mov dword ptr ss : [esp+0x268], 0
        call public_6324570
        sub esp, 0x90
        mov ecx, esp
        mov dword ptr ss : [esp+0x1C0], esp
        push ebp
        mov byte ptr ss : [esp+0x2F8], 1
        call public_6324570
        lea ecx, ss:[esp+0x25C]
        push ecx
        mov dword ptr ss : [esp+0x2F8], 0xFFFFFFFF
        call public_6324b00
        add esp, 0x1B4
        mov edi, ebx
        mov esi, ebp
        mov dword ptr ss : [esp+0x144], 2
        public_6324724 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0xAC]
        sub edx, eax
        jns public_6324741
        public_6324731 : nop
        mov ecx, dword ptr ds : [esi+0x90]
        add esi, 0x90
        sub ecx, eax
        js public_6324731
        public_6324741 : nop
        mov ecx, dword ptr ds : [edi-0x90]
        sub edi, 0x90
        mov edx, eax
        sub edx, ecx
        js public_6324741
        cmp edi, esi
        jbe public_6324796
        push esi
        lea ecx, ss:[esp+0x20]
        call public_6324570
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x148], 3
        call public_6324550
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6324550
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x144], 2
        call public_631fa40
        add esi, 0x90
        jmp public_6324724
        public_6324796 : nop
        lea ecx, ss:[esp+0xB0]
        mov dword ptr ss : [esp+0x144], 0xFFFFFFFF
        call public_631fa40
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 0x1F
        add ecx, edx
        mov edx, esi
        sub edx, ebp
        mov eax, 0x38E38E39
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        push 0
        jg public_63247ea
        push ebx
        push esi
        call public_6324640
        mov ebx, esi
        jmp public_63247f3
        public_63247ea : nop
        push esi
        push ebp
        call public_6324640
        mov ebp, esi
        public_63247f3 : nop
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov esi, edx
        add esp, 0xC
        cmp esi, 0x10
        jg public_6324690
        public_6324816 : nop
        mov ecx, dword ptr ss : [esp+0x13C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x138
        ret 
        UNREACHABLE_TRAP(0x6324640)
    }
}

#undef public_6324690
#undef public_6324724
#undef public_6324731
#undef public_6324741
#undef public_6324796
#undef public_63247ea
#undef public_63247f3
#undef public_6324816

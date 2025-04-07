#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63034f0);
CLANG_FORWARD_PROC_SYMBOL(public_6303680);
CLANG_FORWARD_PROC_SYMBOL(public_63036a0);
CLANG_FORWARD_PROC_SYMBOL(public_63036d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6303755 _public_6303755
#define public_6303758 _public_6303758
#define public_6303786 _public_6303786
#define public_63037cd _public_63037cd
#define public_63037d0 _public_63037d0
#define public_63037fe _public_63037fe
#define public_6303822 _public_6303822

PROC_DECLARE(0x6303720, internal_6303720, public_6303720);
extern "C" NAKED register_t __cdecl internal_6303720()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        push ebx
        push edi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], offset _public_63036d0
        mov dword ptr ss : [esp+0x20], ebx
        call public_63036d0
        add esp, 8
        test al, al
        je public_6303755
        inc dword ptr ss : [esp+0x10]
        public_6303755 : nop
        or ecx, 0xFFFFFFFF
        public_6303758 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6303786
        lea eax, ss:[esp+0x10]
        push eax
/*FIXUP push offset _public_6303680 @0x6303778*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6303680
        push esi
        call public_63034f0
        add esp, 0xC
        public_6303786 : nop
        cmp esi, 0xFFFFFFFF
        mov ecx, esi
        jne public_6303758
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ds:[eax*4]
        push ecx
        mov dword ptr ss : [esp+0x34], eax
        call public_6391d9c
        mov ebp, eax
        push ebx
        push edi
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], offset _public_63036d0
        mov dword ptr ss : [esp+0x30], ebx
        call public_63036d0
        add esp, 0xC
        test al, al
        je public_63037cd
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], edi
        add dword ptr ss : [esp+0x1C], 4
        public_63037cd : nop
        or ecx, 0xFFFFFFFF
        public_63037d0 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 1
        push edi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_63037fe
        lea eax, ss:[esp+0x1C]
        push eax
/*FIXUP push offset _public_63036a0 @0x63037f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63036a0
        push esi
        call public_63034f0
        add esp, 0xC
        public_63037fe : nop
        cmp esi, 0xFFFFFFFF
        mov ecx, esi
        jne public_63037d0
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        jne public_6303822
        push ebp
        or esi, esi
        call public_6391d5a
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        public_6303822 : nop
        mov esi, dword ptr ss : [ebp]
        push ebp
        call public_6391d5a
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6303720)
    }
}

#undef public_6303755
#undef public_6303758
#undef public_6303786
#undef public_63037cd
#undef public_63037d0
#undef public_63037fe
#undef public_6303822

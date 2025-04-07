#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f62750);
CLANG_FORWARD_PROC_SYMBOL(public_6f62880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc88);

#define public_6f62900 _public_6f62900
#define public_6f6290d _public_6f6290d
#define public_6f62918 _public_6f62918

PROC_DECLARE(0x6f62880, internal_6f62880, public_6f62880);
extern "C" NAKED register_t __cdecl internal_6f62880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafc88 @0x6f62882*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc88
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x24]
        push ebx
        push ebp
        push esi
        xor esi, esi
        push edi
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov ebp, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        push eax
        mov dword ptr ss : [esp+0x34], esi
        call public_6f62750
        mov ebx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        cmp ebx, esi
        je public_6f62918
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x34], edx
        je public_6f62918
        cmp ebx, edi
        mov esi, ebx
        je public_6f62918
        mov eax, dword ptr ss : [ebp]
        public_6f62900 : nop
        cmp dword ptr ds : [esi], eax
        je public_6f6290d
        add esi, 0x44
        cmp esi, edi
        jne public_6f62900
        jmp public_6f62918
        public_6f6290d : nop
        mov edi, dword ptr ss : [esp+0x38]
        mov ecx, 0x11
        rep movsd
        public_6f62918 : nop
        push ebx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f62880)
    }
}

#undef public_6f62900
#undef public_6f6290d
#undef public_6f62918

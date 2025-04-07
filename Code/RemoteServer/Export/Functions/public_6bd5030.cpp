#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdb260);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_JUMP_SYMBOL(public_6c0a289);

#define public_6bd50c0 _public_6bd50c0
#define public_6bd50ed _public_6bd50ed
#define public_6bd510c _public_6bd510c

PROC_DECLARE(0x6bd5030, internal_6bd5030, public_6bd5030);
extern "C" NAKED register_t __cdecl internal_6bd5030()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6c0a289 @0x6bd5038*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6c0a289
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        xor ebx, ebx
        cmp esi, ebx
        je public_6bd510c
        mov al, byte ptr ss : [esp+0x34]
        push edi
        push 0x14
        mov byte ptr ss : [esp+0x10], al
        call public_6c09d26
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ss : [esp+0x18], bl
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], ebx
        call public_6bdb260
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call dword ptr ds : [edx+0xFC]
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6bd50ed
        mov edi, edi
        public_6bd50c0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6c09aaa
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6bd50c0
        mov eax, dword ptr ss : [esp+0x10]
        public_6bd50ed : nop
        push eax
        call public_6c09aaa
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0xC
        public_6bd510c : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6bd5030)
    }
}

#undef public_6bd50c0
#undef public_6bd50ed
#undef public_6bd510c

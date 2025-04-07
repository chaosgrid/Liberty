#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272740);
CLANG_FORWARD_PROC_SYMBOL(public_632e850);
CLANG_FORWARD_PROC_SYMBOL(public_6332140);
CLANG_FORWARD_PROC_SYMBOL(public_6332220);
CLANG_FORWARD_PROC_SYMBOL(public_6332290);
CLANG_FORWARD_PROC_SYMBOL(public_6332320);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63974e8);

#define public_632e910 _public_632e910
#define public_632e92b _public_632e92b

PROC_DECLARE(0x632e850, internal_632e850, public_632e850);
extern "C" NAKED register_t __cdecl internal_632e850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63974e8 @0x632e852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63974e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push 0x10
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ss : [esp+0x1C], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor edi, edi
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x40], edi
        call public_6332220
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dl, byte ptr ss : [esp+0xF]
        push edi
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], 1
        mov byte ptr ds : [esi], dl
        call public_6272740
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 2
        call public_6332290
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        push 0xC4
        mov ecx, esi
        mov byte ptr ss : [esp+0x38], 3
        call public_6332140
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov byte ptr ss : [esp+0x34], 5
        mov ebx, eax
        je public_632e92b
        lea esp, ss:[esp]
        public_632e910 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6332320
        cmp edi, ebx
        jne public_632e910
        mov eax, dword ptr ss : [esp+0x1C]
        public_632e92b : nop
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x632e850)
    }
}

#undef public_632e910
#undef public_632e92b

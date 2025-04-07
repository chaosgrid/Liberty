#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272740);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6332140);
CLANG_FORWARD_JUMP_SYMBOL(public_6397588);

#define public_63321b6 _public_63321b6
#define public_63321e1 _public_63321e1
#define public_63321f6 _public_63321f6
#define public_6332209 _public_6332209

PROC_DECLARE(0x6332140, internal_6332140, public_6332140);
extern "C" NAKED register_t __cdecl internal_6332140()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397588 @0x6332148*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397588
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        xor ebx, ebx
        cmp eax, ebx
        jne public_63321f6
        push ebp
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov dword ptr ss : [esp+0x28], ebx
        call public_6272740
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_62bee40
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        inc edx
        cmp eax, ebx
        mov dword ptr ds : [esi+8], edx
        je public_63321b6
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        public_63321b6 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax+4]
        mov ebx, ebp
        imul ebx, 0xC8
        push ebx
        add edi, 8
        call dword ptr ds : [public_6399328]
        add esp, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ebx
        xor ecx, ecx
        mov edx, 0xC8
        public_63321e1 : nop
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [esi+0xC]
        add eax, ecx
        add ecx, ebp
        dec edx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [esi+0xC], eax
        jne public_63321e1
        pop edi
        xor ebx, ebx
        pop ebp
        public_63321f6 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0xC]
        inc edx
        cmp eax, ebx
        mov dword ptr ds : [esi+0x10], edx
        je public_6332209
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0xC], ecx
        public_6332209 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6332140)
    }
}

#undef public_63321b6
#undef public_63321e1
#undef public_63321f6
#undef public_6332209

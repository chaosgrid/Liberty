#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4650);
CLANG_FORWARD_PROC_SYMBOL(public_6d56860);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63ad7);

#define public_6d568a0 _public_6d568a0
#define public_6d568b5 _public_6d568b5
#define public_6d568e3 _public_6d568e3
#define public_6d568ec _public_6d568ec
#define public_6d5690f _public_6d5690f
#define public_6d5691b _public_6d5691b

PROC_DECLARE(0x6d56860, internal_6d56860, public_6d56860);
extern "C" NAKED register_t __cdecl internal_6d56860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63ad7 @0x6d56862*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63ad7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6d64ef8
        mov ebx, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x24]
        mov dword ptr ss : [esp+0x20], 1
        je public_6d568b5
        lea ecx, ds:[ecx]
        public_6d568a0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6ce4650
        cmp esi, ebx
        jne public_6d568a0
        public_6d568b5 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6d5ffb0
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ss : [ebp+0x18]
        add esp, 4
        cmp eax, ebx
        je public_6d568ec
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6d568e3
        cmp cl, 0xFF
        je public_6d568e3
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6d568ec
        public_6d568e3 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d568ec : nop
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x20], ebx
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_6d5691b
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d5690f
        cmp cl, 0xFF
        je public_6d5690f
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d5691b
        public_6d5690f : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d5691b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d56860)
    }
}

#undef public_6d568a0
#undef public_6d568b5
#undef public_6d568e3
#undef public_6d568ec
#undef public_6d5690f
#undef public_6d5691b

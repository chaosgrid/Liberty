#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_577b40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3b9b);

#define public_577bae _public_577bae
#define public_577bb0 _public_577bb0
#define public_577bbd _public_577bbd
#define public_577bd7 _public_577bd7
#define public_577bf1 _public_577bf1
#define public_577c0f _public_577c0f

PROC_DECLARE(0x577b40, internal_577b40, public_577b40);
extern "C" NAKED register_t __cdecl internal_577b40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3b9b @0x577b42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3b9b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ds : [public_67c3ac]
        test eax, eax
        je public_577c0f
        mov eax, dword ptr ds : [public_67c3a8]
        test eax, eax
        push ebx
        push esi
        push edi
        jne public_577bbd
        push 0xC
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        test esi, esi
        mov dword ptr ss : [esp+0x18], 0
        je public_577bae
        mov al, byte ptr ss : [esp+0x20]
        push 0xC
        mov byte ptr ds : [esi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        jmp public_577bb0
        public_577bae : nop
        xor eax, eax
        public_577bb0 : nop
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [public_67c3a8], eax
        public_577bbd : nop
        mov ebx, eax
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_577bd7
        mov edi, eax
        public_577bd7 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_577bf1
        mov edx, dword ptr ds : [public_67c3ac]
        mov dword ptr ds : [eax], edx
        public_577bf1 : nop
        inc dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        mov dword ptr ds : [public_67c3ac], eax
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_577c0f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_67c3ac], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x577b40)
    }
}

#undef public_577bae
#undef public_577bb0
#undef public_577bbd
#undef public_577bd7
#undef public_577bf1
#undef public_577c0f

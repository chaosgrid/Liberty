#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_680a800);
CLANG_FORWARD_PROC_SYMBOL(public_680b790);
CLANG_FORWARD_PROC_SYMBOL(public_680b850);

#define public_680b866 _public_680b866
#define public_680b883 _public_680b883
#define public_680b897 _public_680b897
#define public_680b8a0 _public_680b8a0
#define public_680b8b8 _public_680b8b8
#define public_680b8dd _public_680b8dd
#define public_680b8eb _public_680b8eb

PROC_DECLARE(0x680b850, internal_680b850, public_680b850);
extern "C" NAKED register_t __cdecl internal_680b850()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        xor ebp, ebp
        call public_680b790
        mov edi, dword ptr ss : [esp+0x18]
        add esp, 4
        public_680b866 : nop
        mov eax, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [eax], 1
        jle public_680b883
        mov ecx, dword ptr ds : [esi]
        push 0x107
        push ecx
        call dword ptr ds : [public_680c05c]
        add esp, 8
        jmp public_680b897
        public_680b883 : nop
        mov eax, dword ptr ds : [public_680c054]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        xor eax, eax
        mov ax, word ptr ds : [ecx+edx*2]
        and eax, 0x107
        public_680b897 : nop
        test eax, eax
        jne public_680b8a0
        cmp dword ptr ds : [esi], 0x5F
        jne public_680b8eb
        public_680b8a0 : nop
        cmp ebp, 0x50
        jl public_680b8b8
        push edi
/*FIXUP push offset public_680e5d8 @0x680b8a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e5d8
        push esi
        mov byte ptr ds : [edi+0x50], 0
        call public_680a800
        add esp, 0xC
        public_680b8b8 : nop
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [edi+ebp], dl
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax]
        inc ebp
        dec ecx
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        cmp dword ptr ds : [ecx], 0
        jl public_680b8dd
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        mov al, byte ptr ds : [edx]
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [esi], eax
        jmp public_680b866
        public_680b8dd : nop
        push ecx
        call dword ptr ds : [ecx+8]
        add esp, 4
        mov dword ptr ds : [esi], eax
        jmp public_680b866
        public_680b8eb : nop
        mov byte ptr ds : [edi+ebp], 0
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x680b850)
    }
}

#undef public_680b866
#undef public_680b883
#undef public_680b897
#undef public_680b8a0
#undef public_680b8b8
#undef public_680b8dd
#undef public_680b8eb

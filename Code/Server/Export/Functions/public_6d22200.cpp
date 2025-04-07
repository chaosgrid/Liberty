#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22200);
CLANG_FORWARD_PROC_SYMBOL(public_6d23fd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d628e0);

#define public_6d22240 _public_6d22240
#define public_6d22257 _public_6d22257
#define public_6d22278 _public_6d22278

PROC_DECLARE(0x6d22200, internal_6d22200, public_6d22200);
extern "C" NAKED register_t __cdecl internal_6d22200()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d628e0 @0x6d22202*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d628e0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], offset public_6d68e7c
        mov ebp, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ss : [ebp]
        lea edi, ds:[ebx+8]
        xor eax, eax
        cmp esi, ebp
        mov dword ptr ss : [esp+0x20], eax
        je public_6d22257
        nop 
        lea esp, ss:[esp]
        public_6d22240 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6d23fd0
        cmp esi, ebp
        jne public_6d22240
        xor eax, eax
        public_6d22257 : nop
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [ebx], offset public_6d68d00
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20], 1
        je public_6d22278
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d22278 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [ebx], offset public_6d68d28
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d22200)
    }
}

#undef public_6d22240
#undef public_6d22257
#undef public_6d22278

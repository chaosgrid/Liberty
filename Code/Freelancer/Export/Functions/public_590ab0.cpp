#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_590ab0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c48ec);

#define public_590b10 _public_590b10
#define public_590b1d _public_590b1d
#define public_590b20 _public_590b20
#define public_590b2e _public_590b2e

PROC_DECLARE(0x590ab0, internal_590ab0, public_590ab0);
extern "C" NAKED register_t __cdecl internal_590ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c48ec @0x590ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c48ec
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+8], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_590b2e
        push edi
        mov dword ptr ds : [esi+8], ebx
        mov edi, dword ptr ss : [esp+0x24]
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov al, byte ptr ds : [edi+2]
        mov byte ptr ds : [esi+2], al
        mov dword ptr ds : [esi+4], ebx
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        mov edx, 1
        mov byte ptr ss : [esp+0x18], dl
        je public_590b20
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, ebx
        jbe public_590b10
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_590b10 : nop
        cmp dword ptr ds : [ecx+4], ebx
        jne public_590b1d
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        public_590b1d : nop
        mov dword ptr ds : [esi+8], ebx
        public_590b20 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov dword ptr ds : [esi+8], eax
        pop edi
        je public_590b2e
        inc dword ptr ds : [eax+4]
        public_590b2e : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x590ab0)
    }
}

#undef public_590b10
#undef public_590b1d
#undef public_590b20
#undef public_590b2e

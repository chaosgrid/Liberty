#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6eb52cd _public_6eb52cd
#define public_6eb5301 _public_6eb5301
#define public_6eb5320 _public_6eb5320
#define public_6eb533e _public_6eb533e

PROC_DECLARE(0x6eb52b0, internal_6eb52b0, public_6eb52b0);
extern "C" NAKED register_t __cdecl internal_6eb52b0()
{
    __asm
    {
        push esi
        push edi
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 4
        mov esi, dword ptr ss : [esp+0xC]
        je public_6eb52cd
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x68], al
        public_6eb52cd : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        mov byte ptr ds : [esi+0x69], 1
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edi, eax
        test edi, edi
        setge al
        test al, al
        mov byte ptr ds : [esi+0x69], al
        je public_6eb5301
        mov al, byte ptr ds : [esi+0x68]
        test al, al
        jne public_6eb533e
        public_6eb5301 : nop
        mov edi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [esi+8]
        add edi, 0x2C
        cmp eax, 0xFFFFFFFF
        je public_6eb5320
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [edi+4], 0xFFFFFFFF
        public_6eb5320 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [esi+0x69], 0
        mov byte ptr ds : [esi+0x68], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        mov edi, eax
        public_6eb533e : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x24]
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb52b0)
    }
}

#undef public_6eb52cd
#undef public_6eb5301
#undef public_6eb5320
#undef public_6eb533e

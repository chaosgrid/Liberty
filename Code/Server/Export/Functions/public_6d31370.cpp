#include "Server-PCH.h"


#define public_6d31388 _public_6d31388
#define public_6d3139b _public_6d3139b
#define public_6d313a5 _public_6d313a5
#define public_6d313bc _public_6d313bc
#define public_6d313be _public_6d313be
#define public_6d313c9 _public_6d313c9
#define public_6d313d9 _public_6d313d9

PROC_DECLARE(0x6d31370, internal_6d31370, public_6d31370);
extern "C" NAKED register_t __cdecl internal_6d31370()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0x18]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        cmp eax, edi
        je public_6d313a5
        mov ebx, edx
        sub ebx, eax
        public_6d31388 : nop
        mov dx, word ptr ds : [esi]
        test dx, dx
        je public_6d313d9
        cmp word ptr ds : [eax], dx
        je public_6d3139b
        cmp word ptr ds : [eax+ebx], dx
        jne public_6d313d9
        public_6d3139b : nop
        add eax, 2
        add esi, 2
        cmp eax, edi
        jne public_6d31388
        public_6d313a5 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d313c9
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d313bc : nop
        je public_6d313d9
        public_6d313be : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 8
        public_6d313c9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d313be
        cmp dword ptr ds : [eax+8], esi
        jmp public_6d313bc
        public_6d313d9 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d31370)
    }
}

#undef public_6d31388
#undef public_6d3139b
#undef public_6d313a5
#undef public_6d313bc
#undef public_6d313be
#undef public_6d313c9
#undef public_6d313d9

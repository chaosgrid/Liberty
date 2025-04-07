#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6300);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);

#define public_6ce6345 _public_6ce6345
#define public_6ce6374 _public_6ce6374
#define public_6ce6376 _public_6ce6376
#define public_6ce63d6 _public_6ce63d6
#define public_6ce63e5 _public_6ce63e5

PROC_DECLARE(0x6ce6300, internal_6ce6300, public_6ce6300);
extern "C" NAKED register_t __cdecl internal_6ce6300()
{
    __asm
    {
        push ecx
        push ebp
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x10]
        push 0x1E
/*FIXUP push offset public_6d8d588 @0x6ce630a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d588
        call dword ptr ds : [public_6d6419c]
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edi+0x28]
        push eax
        call public_6d06cd0
        push eax
        call dword ptr ds : [public_6d64198]
        add esp, 0x14
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jle public_6ce63e5
        push ebx
        push esi
        public_6ce6345 : nop
        mov eax, dword ptr ds : [ebp*4+public_6d8d588]
        test eax, eax
        je public_6ce63d6
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0xA7
        cmp cl, 0xA7
        jne public_6ce63d6
        mov ecx, dword ptr ds : [edi+0x10]
        test ecx, ecx
        je public_6ce6374
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x17
        cmp dl, 0x17
        je public_6ce6376
        public_6ce6374 : nop
        xor ecx, ecx
        public_6ce6376 : nop
        mov edx, dword ptr ds : [eax+0xE4]
        cmp edx, dword ptr ds : [ecx+0xE4]
        je public_6ce63d6
        mov eax, dword ptr ds : [eax+0xB0]
        mov ecx, dword ptr ds : [edi+0x28]
        push eax
        call public_6d0c840
        mov ebx, eax
        test ebx, ebx
        je public_6ce63d6
        call dword ptr ds : [public_6d64c7c]
        imul eax, 0x64
        mov ecx, dword ptr ds : [edi+0x10]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov esi, eax
        sar esi, 0xF
        call dword ptr ds : [public_6d6419c]
        cmp esi, dword ptr ds : [eax+0x88]
        jg public_6ce63d6
        mov eax, dword ptr ds : [public_6d6402c]
        movzx eax, word ptr ds : [eax]
        mov edx, dword ptr ds : [ebx+4]
        push 0
        lea ecx, ds:[ebx+4]
        push eax
        push edi
        call dword ptr ds : [edx+0x48]
        public_6ce63d6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        cmp ebp, eax
        jl public_6ce6345
        pop esi
        pop ebx
        public_6ce63e5 : nop
        pop edi
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ce6300)
    }
}

#undef public_6ce6345
#undef public_6ce6374
#undef public_6ce6376
#undef public_6ce63d6
#undef public_6ce63e5

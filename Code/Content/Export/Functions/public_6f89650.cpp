#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f89650);

#define public_6f89673 _public_6f89673
#define public_6f89681 _public_6f89681
#define public_6f89690 _public_6f89690
#define public_6f896ad _public_6f896ad
#define public_6f896bc _public_6f896bc
#define public_6f896d0 _public_6f896d0
#define public_6f896e0 _public_6f896e0

PROC_DECLARE(0x6f89650, internal_6f89650, public_6f89650);
extern "C" NAKED register_t __cdecl internal_6f89650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        push edi
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ecx
        je public_6f896e0
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov ebx, 2
        public_6f89673 : nop
        mov edx, dword ptr ds : [edi+0x88]
        cmp edx, dword ptr ds : [edi+0x8C]
        je public_6f896d0
        public_6f89681 : nop
        mov eax, dword ptr ds : [edx+0xE4]
        cmp eax, dword ptr ds : [edx+0xE8]
        je public_6f896bc
        nop 
        public_6f89690 : nop
        cmp dword ptr ds : [eax+0xFC], ebx
        jne public_6f896ad
        mov ebp, dword ptr ds : [eax+0x104]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [eax+0x94]
        add dword ptr ds : [ecx], ebp
        cmp dword ptr ds : [ecx], 1
        jg public_6f896bc
        public_6f896ad : nop
        mov ebp, dword ptr ds : [edx+0xE8]
        add eax, 0x108
        cmp eax, ebp
        jne public_6f89690
        public_6f896bc : nop
        mov eax, dword ptr ds : [edi+0x8C]
        add edx, 0xF0
        cmp edx, eax
        jne public_6f89681
        mov eax, dword ptr ss : [esp+0x14]
        public_6f896d0 : nop
        mov edx, dword ptr ds : [eax+8]
        add edi, 0x98
        cmp edi, edx
        jne public_6f89673
        pop esi
        pop ebp
        pop ebx
        public_6f896e0 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x6f89650)
    }
}

#undef public_6f89673
#undef public_6f89681
#undef public_6f89690
#undef public_6f896ad
#undef public_6f896bc
#undef public_6f896d0
#undef public_6f896e0

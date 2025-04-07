#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40550);
CLANG_FORWARD_PROC_SYMBOL(public_6f44330);
CLANG_FORWARD_PROC_SYMBOL(public_6f44700);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f40580 _public_6f40580
#define public_6f4059f _public_6f4059f
#define public_6f405cb _public_6f405cb
#define public_6f405d0 _public_6f405d0
#define public_6f405f0 _public_6f405f0

PROC_DECLARE(0x6f40550, internal_6f40550, public_6f40550);
extern "C" NAKED register_t __cdecl internal_6f40550()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6f405cb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f405cb
        cmp ebx, eax
        jne public_6f405cb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f4059f
        lea esp, ss:[esp]
        public_6f40580 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f44700
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f40580
        public_6f4059f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6f405cb : nop
        cmp ecx, ebx
        je public_6f405f0
        nop 
        public_6f405d0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ea76e0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f44330
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f405d0
        public_6f405f0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f40550)
    }
}

#undef public_6f40580
#undef public_6f4059f
#undef public_6f405cb
#undef public_6f405d0
#undef public_6f405f0

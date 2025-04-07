#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7260);
CLANG_FORWARD_PROC_SYMBOL(public_65d72a2);
CLANG_FORWARD_PROC_SYMBOL(public_65d7336);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65dcf5f _public_65dcf5f
#define public_65dcfb3 _public_65dcfb3
#define public_65dcfbe _public_65dcfbe
#define public_65dcfc5 _public_65dcfc5
#define public_65dcfcc _public_65dcfcc
#define public_65dcfe1 _public_65dcfe1

PROC_DECLARE(0x65dcf2c, internal_65dcf2c, public_65dcf2c);
extern "C" NAKED register_t __cdecl internal_65dcf2c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push ebp
        cld 
        mov ebx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        test dword ptr ds : [eax+4], 6
        jne public_65dcfcc
        mov dword ptr ss : [ebp-8], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        lea eax, ss:[ebp-8]
        mov dword ptr ds : [ebx-4], eax
        mov esi, dword ptr ds : [ebx+0xC]
        mov edi, dword ptr ds : [ebx+8]
        public_65dcf5f : nop
        cmp esi, 0xFFFFFFFF
        je public_65dcfc5
        lea ecx, ds:[esi+esi*2]
        cmp dword ptr ds : [edi+ecx*4+4], 0
        je public_65dcfb3
        push esi
        push ebp
        lea ebp, ds:[ebx+0x10]
        call dword ptr ds : [edi+ecx*4+4]
        pop ebp
        pop esi
        mov ebx, dword ptr ss : [ebp+0xC]
        or eax, eax
        je public_65dcfb3
        js public_65dcfbe
        mov edi, dword ptr ds : [ebx+8]
        push ebx
        call public_65d7260
        add esp, 4
        lea ebp, ds:[ebx+0x10]
        push esi
        push ebx
        call public_65d72a2
        add esp, 8
        lea ecx, ds:[esi+esi*2]
        push 1
        mov eax, dword ptr ds : [edi+ecx*4+8]
        call public_65d7336
        mov eax, dword ptr ds : [edi+ecx*4]
        mov dword ptr ds : [ebx+0xC], eax
        call dword ptr ds : [edi+ecx*4+8]
        public_65dcfb3 : nop
        mov edi, dword ptr ds : [ebx+8]
        lea ecx, ds:[esi+esi*2]
        mov esi, dword ptr ds : [edi+ecx*4]
        jmp public_65dcf5f
        public_65dcfbe : nop
        mov eax, 0
        jmp public_65dcfe1
        public_65dcfc5 : nop
        mov eax, 1
        jmp public_65dcfe1
        public_65dcfcc : nop
        push ebp
        lea ebp, ds:[ebx+0x10]
        push 0xFFFFFFFF
        push ebx
        call public_65d72a2
        add esp, 8
        pop ebp
        mov eax, 1
        public_65dcfe1 : nop
        pop ebp
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65dcf2c)
    }
}

#undef public_65dcf5f
#undef public_65dcfb3
#undef public_65dcfbe
#undef public_65dcfc5
#undef public_65dcfcc
#undef public_65dcfe1

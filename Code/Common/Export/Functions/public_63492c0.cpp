#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63492c0);
CLANG_FORWARD_PROC_SYMBOL(public_6349350);

#define public_63492d5 _public_63492d5
#define public_634930e _public_634930e
#define public_6349332 _public_6349332
#define public_634933c _public_634933c

PROC_DECLARE(0x63492c0, internal_63492c0, public_63492c0);
extern "C" NAKED register_t __cdecl internal_63492c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        xor eax, eax
        push edi
        mov edi, ecx
        mov ax, word ptr ds : [edi+0x1E]
        xor esi, esi
        mov dword ptr ss : [esp+0x14], eax
        public_63492d5 : nop
        lea ebx, ds:[esi+1]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jge public_634933c
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [eax+esi*4+4]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        cmp eax, ebp
        jle public_6349332
        push ebx
        push esi
        mov ecx, edi
        call public_6349350
        test esi, esi
        jle public_6349332
        public_634930e : nop
        mov eax, dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [eax+esi*4-4]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        cmp eax, ebp
        jle public_6349332
        push esi
        lea ebx, ds:[esi-1]
        push ebx
        mov ecx, edi
        call public_6349350
        mov esi, ebx
        test esi, esi
        jg public_634930e
        public_6349332 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_63492d5
        public_634933c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63492c0)
    }
}

#undef public_63492d5
#undef public_634930e
#undef public_6349332
#undef public_634933c

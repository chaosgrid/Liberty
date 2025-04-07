#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32040);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c33241 _public_6c33241
#define public_6c33249 _public_6c33249
#define public_6c33259 _public_6c33259
#define public_6c33271 _public_6c33271

PROC_DECLARE(0x6c33210, internal_6c33210, public_6c33210);
extern "C" NAKED register_t __cdecl internal_6c33210()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6c33241
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c33241
        lea eax, ss:[esp+0x14]
        jmp public_6c33249
        public_6c33241 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6c33249 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        jne public_6c33259
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x20
        public_6c33259 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        push esi
        lea ecx, ds:[eax+0x10]
        call public_6c32040
        test eax, eax
        jne public_6c33271
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0x20
        public_6c33271 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        sub esp, 0x10
        mov edi, esp
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi+8], ebx
        mov ebx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edi+0xC], ebx
        mov edi, dword ptr ss : [esp+0x30]
        push edi
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x30]
        pop edi
        pop esi
        movzx eax, al
        pop ebx
        pop ecx
        ret 0x20
        UNREACHABLE_TRAP(0x6c33210)
    }
}

#undef public_6c33241
#undef public_6c33249
#undef public_6c33259
#undef public_6c33271

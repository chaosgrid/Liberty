#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac240);

#define public_6eac260 _public_6eac260
#define public_6eac277 _public_6eac277
#define public_6eac27e _public_6eac27e
#define public_6eac287 _public_6eac287

PROC_DECLARE(0x6eac240, internal_6eac240, public_6eac240);
extern "C" NAKED register_t __cdecl internal_6eac240()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_6eac27e
        mov eax, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [public_6fb3294]
        lea edi, ds:[eax+4]
        lea esp, ss:[esp]
        public_6eac260 : nop
        lea ecx, ds:[esi+0x28]
        push ecx
        push edi
        call ebp
        add esp, 8
        test eax, eax
        jne public_6eac277
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [esi+0x48]
        je public_6eac287
        public_6eac277 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x10]
        jne public_6eac260
        public_6eac27e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 0xC
        public_6eac287 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eac240)
    }
}

#undef public_6eac260
#undef public_6eac277
#undef public_6eac27e
#undef public_6eac287

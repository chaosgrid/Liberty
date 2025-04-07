#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4310);
CLANG_FORWARD_PROC_SYMBOL(public_62e92e0);

#define public_62e92f5 _public_62e92f5
#define public_62e9324 _public_62e9324
#define public_62e932b _public_62e932b
#define public_62e932e _public_62e932e

PROC_DECLARE(0x62e92e0, internal_62e92e0, public_62e92e0);
extern "C" NAKED register_t __cdecl internal_62e92e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        call public_62d4310
        test al, al
        je public_62e92f5
        mov al, 1
        pop esi
        ret 
        public_62e92f5 : nop
        mov eax, dword ptr ds : [esi]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62e932b
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+0xC0]
        cmp eax, 0xA
        jne public_62e9324
        mov al, 1
        pop esi
        ret 
        public_62e9324 : nop
        cmp eax, 7
        mov al, 1
        je public_62e932e
        public_62e932b : nop
        mov al, byte ptr ds : [esi+0x17]
        public_62e932e : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62e92e0)
    }
}

#undef public_62e92f5
#undef public_62e9324
#undef public_62e932b
#undef public_62e932e

#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b43870);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b43884 _public_6b43884
#define public_6b43894 _public_6b43894
#define public_6b4389b _public_6b4389b
#define public_6b438ab _public_6b438ab
#define public_6b438b4 _public_6b438b4
#define public_6b438db _public_6b438db

PROC_DECLARE(0x6b43870, internal_6b43870, public_6b43870);
extern "C" NAKED register_t __cdecl internal_6b43870()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        push edi
        mov dword ptr ds : [esi], offset public_6b6c258
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6b4389b
        public_6b43884 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        je public_6b43894
        push eax
        call public_6b6a092
        add esp, 4
        public_6b43894 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x2C]
        jne public_6b43884
        public_6b4389b : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6b438ab
        push eax
        call public_6b6a092
        add esp, 4
        public_6b438ab : nop
        mov ebx, dword ptr ds : [esi+0x2C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6b438db
        public_6b438b4 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ds : [esi+0x30]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x30], ecx
        jne public_6b438b4
        public_6b438db : nop
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6b6a092
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x2C], 0
        mov dword ptr ds : [esi+0x30], 0
        mov ecx, esi
        pop esi
        pop ebx
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b43870)
    }
}

#undef public_6b43884
#undef public_6b43894
#undef public_6b4389b
#undef public_6b438ab
#undef public_6b438b4
#undef public_6b438db

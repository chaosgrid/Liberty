#include "Common-PCH.h"


#define public_62f3dd1 _public_62f3dd1
#define public_62f3df4 _public_62f3df4
#define public_62f3e01 _public_62f3e01
#define public_62f3e10 _public_62f3e10
#define public_62f3e1a _public_62f3e1a
#define public_62f3e21 _public_62f3e21
#define public_62f3e29 _public_62f3e29

PROC_DECLARE(0x62f3dc0, internal_62f3dc0, public_62f3dc0);
extern "C" NAKED register_t __cdecl internal_62f3dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcab0]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_62f3e29
        mov edi, dword ptr ss : [esp+0xC]
        public_62f3dd1 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax]
        test al, al
        je public_62f3e29
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f3e01
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62f3e21
        public_62f3df4 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62f3df4
        jmp public_62f3e21
        public_62f3e01 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62f3e1a
        lea esp, ss:[esp]
        public_62f3e10 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62f3e10
        public_62f3e1a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62f3e21
        mov esi, eax
        public_62f3e21 : nop
        cmp esi, dword ptr ds : [public_63fcab0]
        jne public_62f3dd1
        public_62f3e29 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62f3dc0)
    }
}

#undef public_62f3dd1
#undef public_62f3df4
#undef public_62f3e01
#undef public_62f3e10
#undef public_62f3e1a
#undef public_62f3e21
#undef public_62f3e29

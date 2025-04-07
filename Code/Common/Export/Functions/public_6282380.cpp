#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbb20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6282397 _public_6282397
#define public_62823cc _public_62823cc
#define public_62823ce _public_62823ce
#define public_62823d4 _public_62823d4

PROC_DECLARE(0x6282380, internal_6282380, public_6282380);
extern "C" NAKED register_t __cdecl internal_6282380()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0xC], ecx
        je public_62823d4
        mov esi, dword ptr ds : [edi]
        cmp esi, ebx
        je public_62823d4
        public_6282397 : nop
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[edi+8]
        call public_62bbb20
        test al, al
        je public_62823cc
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        jmp public_62823ce
        public_62823cc : nop
        mov edi, esi
        public_62823ce : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, ebx
        jne public_6282397
        public_62823d4 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6282380)
    }
}

#undef public_6282397
#undef public_62823cc
#undef public_62823ce
#undef public_62823d4

#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e610);

#define public_636e623 _public_636e623
#define public_636e625 _public_636e625
#define public_636e636 _public_636e636
#define public_636e638 _public_636e638
#define public_636e641 _public_636e641
#define public_636e64d _public_636e64d

PROC_DECLARE(0x636e610, internal_636e610, public_636e610);
extern "C" NAKED register_t __cdecl internal_636e610()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+ecx*4+4]
        test eax, eax
        push esi
        je public_636e623
        dec eax
        jmp public_636e625
        public_636e623 : nop
        mov eax, ecx
        public_636e625 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+edx*4+4]
        test ecx, ecx
        je public_636e636
        dec ecx
        jmp public_636e638
        public_636e636 : nop
        mov ecx, edx
        public_636e638 : nop
        cmp eax, ecx
        je public_636e641
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_636e641 : nop
        test eax, eax
        jne public_636e64d
        pop esi
        mov eax, 1
        pop ebx
        ret 
        public_636e64d : nop
        push edi
        lea ecx, ds:[eax*4]
        lea edi, ds:[esi+4]
        lea esi, ds:[ebx+4]
        xor eax, eax
        repe cmpsb
        pop edi
        pop esi
        sete al
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636e610)
    }
}

#undef public_636e623
#undef public_636e625
#undef public_636e636
#undef public_636e638
#undef public_636e641
#undef public_636e64d

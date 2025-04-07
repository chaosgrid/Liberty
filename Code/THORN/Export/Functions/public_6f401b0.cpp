#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f401b0);

#define public_6f401f1 _public_6f401f1
#define public_6f401f7 _public_6f401f7
#define public_6f4020e _public_6f4020e
#define public_6f40225 _public_6f40225
#define public_6f40227 _public_6f40227

PROC_DECLARE(0x6f401b0, internal_6f401b0, public_6f401b0);
extern "C" NAKED register_t __cdecl internal_6f401b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        je public_6f4020e
        test edi, edi
        je public_6f401f7
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        setb cl
        test cl, cl
        je public_6f401f7
        test ebx, ebx
        je public_6f401f1
        mov ecx, dword ptr ds : [ebx+8]
        cmp eax, ecx
        setb al
        test al, al
        jne public_6f40225
        cmp edx, ecx
        setb al
        test al, al
        mov eax, ebx
        jne public_6f40227
        public_6f401f1 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        public_6f401f7 : nop
        test ebx, ebx
        je public_6f4020e
        mov eax, dword ptr ds : [esi+8]
        cmp eax, dword ptr ds : [ebx+8]
        setb al
        test al, al
        je public_6f4020e
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        public_6f4020e : nop
        test edi, edi
        je public_6f40225
        test ebx, ebx
        je public_6f40225
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, dword ptr ds : [ebx+8]
        setb al
        test al, al
        mov eax, ebx
        jne public_6f40227
        public_6f40225 : nop
        mov eax, edi
        public_6f40227 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f401b0)
    }
}

#undef public_6f401f1
#undef public_6f401f7
#undef public_6f4020e
#undef public_6f40225
#undef public_6f40227

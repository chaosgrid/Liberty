#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af8a0);
CLANG_FORWARD_PROC_SYMBOL(public_62afa20);

#define public_62af68f _public_62af68f
#define public_62af6a0 _public_62af6a0
#define public_62af6b2 _public_62af6b2
#define public_62af6c5 _public_62af6c5
#define public_62af6ef _public_62af6ef
#define public_62af6f1 _public_62af6f1
#define public_62af6f5 _public_62af6f5

PROC_DECLARE(0x62af660, internal_62af660, public_62af660);
extern "C" NAKED register_t __cdecl internal_62af660()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        je public_62af68f
        mov eax, dword ptr ds : [ecx+0x90]
        add ecx, 0x8C
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_62af8a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_62af68f : nop
        mov eax, dword ptr ds : [ecx+0x90]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_62af6f5
        mov edx, dword ptr ss : [esp+0x14]
        nop 
        public_62af6a0 : nop
        cmp dword ptr ds : [ebx+8], edx
        je public_62af6b2
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_62af6a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_62af6b2 : nop
        mov ebp, dword ptr ds : [ecx+0x90]
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebp
        lea edi, ds:[ecx+0x8C]
        je public_62af6f5
        public_62af6c5 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [ebx+8]
        jne public_62af6ef
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        push 1
        mov dword ptr ds : [edx+4], ecx
        push eax
        mov ecx, edi
        call public_62afa20
        dec dword ptr ds : [edi+8]
        jmp public_62af6f1
        public_62af6ef : nop
        mov esi, dword ptr ds : [esi]
        public_62af6f1 : nop
        cmp esi, ebp
        jne public_62af6c5
        public_62af6f5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62af660)
    }
}

#undef public_62af68f
#undef public_62af6a0
#undef public_62af6b2
#undef public_62af6c5
#undef public_62af6ef
#undef public_62af6f1
#undef public_62af6f5

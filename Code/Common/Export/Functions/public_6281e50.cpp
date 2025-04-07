#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6281e74 _public_6281e74
#define public_6281e89 _public_6281e89
#define public_6281eab _public_6281eab
#define public_6281ec4 _public_6281ec4
#define public_6281ec6 _public_6281ec6
#define public_6281ef1 _public_6281ef1

PROC_DECLARE(0x6281e50, internal_6281e50, public_6281e50);
extern "C" NAKED register_t __cdecl internal_6281e50()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        jbe public_6281ec4
        sub edi, eax
        mov ebx, dword ptr ds : [esi+4]
        je public_6281ef1
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], edi
        public_6281e74 : nop
        mov edi, dword ptr ds : [ebx+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6281e89
        mov edi, eax
        public_6281e89 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6281eab
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ebp
        public_6281eab : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        dec eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6281e74
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret 0x10
        public_6281ec4 : nop
        jae public_6281ef1
        public_6281ec6 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        mov eax, ecx
        cmp edi, eax
        mov dword ptr ds : [esi+8], ecx
        jb public_6281ec6
        public_6281ef1 : nop
        pop edi
        pop esi
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6281e50)
    }
}

#undef public_6281e74
#undef public_6281e89
#undef public_6281eab
#undef public_6281ec4
#undef public_6281ec6
#undef public_6281ef1

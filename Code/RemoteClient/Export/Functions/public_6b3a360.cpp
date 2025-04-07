#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a360);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3a385 _public_6b3a385
#define public_6b3a39d _public_6b3a39d
#define public_6b3a3a3 _public_6b3a3a3
#define public_6b3a3ce _public_6b3a3ce
#define public_6b3a3d2 _public_6b3a3d2
#define public_6b3a3e7 _public_6b3a3e7
#define public_6b3a404 _public_6b3a404
#define public_6b3a415 _public_6b3a415

PROC_DECLARE(0x6b3a360, internal_6b3a360, public_6b3a360);
extern "C" NAKED register_t __cdecl internal_6b3a360()
{
    __asm
    {
        push ebx
        push ebp
        lea ebp, ds:[ecx+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        push esi
        push edi
        je public_6b3a415
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_6b3a39d
        public_6b3a385 : nop
        cmp ebx, ecx
        je public_6b3a39d
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_6b3a385
        public_6b3a39d : nop
        cmp eax, esi
        mov edi, eax
        je public_6b3a3ce
        public_6b3a3a3 : nop
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
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6b3a3a3
        mov ecx, dword ptr ss : [esp+0x14]
        public_6b3a3ce : nop
        cmp ebx, ecx
        je public_6b3a415
        public_6b3a3d2 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6b6a134
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6b3a3e7
        mov edi, eax
        public_6b3a3e7 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6b3a404
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6b3a404 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6b3a3d2
        public_6b3a415 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b3a360)
    }
}

#undef public_6b3a385
#undef public_6b3a39d
#undef public_6b3a3a3
#undef public_6b3a3ce
#undef public_6b3a3d2
#undef public_6b3a3e7
#undef public_6b3a404
#undef public_6b3a415

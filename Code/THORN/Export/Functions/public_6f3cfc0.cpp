#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cfc0);

#define public_6f3cfe5 _public_6f3cfe5
#define public_6f3d039 _public_6f3d039
#define public_6f3d03b _public_6f3d03b
#define public_6f3d03f _public_6f3d03f
#define public_6f3d074 _public_6f3d074
#define public_6f3d089 _public_6f3d089

PROC_DECLARE(0x6f3cfc0, internal_6f3cfc0, public_6f3cfc0);
extern "C" NAKED register_t __cdecl internal_6f3cfc0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        cmp ebp, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_6f3d089
        push ebx
        mov ebx, dword ptr ss : [ebp+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        push edi
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp edx, edi
        je public_6f3d03f
        public_6f3cfe5 : nop
        cmp esi, ebx
        je public_6f3d074
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 5
        jp public_6f3d039
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edx+4]
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+4], esi
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, eax
        jmp public_6f3d03b
        public_6f3d039 : nop
        mov edx, dword ptr ds : [edx]
        public_6f3d03b : nop
        cmp edx, edi
        jne public_6f3cfe5
        public_6f3d03f : nop
        cmp esi, ebx
        je public_6f3d074
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [edx], edi
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+4], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ds : [edx+4], eax
        public_6f3d074 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        add edx, eax
        pop esi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [ebp+8], 0
        pop ebx
        public_6f3d089 : nop
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f3cfc0)
    }
}

#undef public_6f3cfe5
#undef public_6f3d039
#undef public_6f3d03b
#undef public_6f3d03f
#undef public_6f3d074
#undef public_6f3d089

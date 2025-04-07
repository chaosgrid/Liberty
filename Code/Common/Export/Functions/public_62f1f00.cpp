#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1f00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62f1f18 _public_62f1f18
#define public_62f1f2d _public_62f1f2d
#define public_62f1f30 _public_62f1f30
#define public_62f1f3d _public_62f1f3d
#define public_62f1f40 _public_62f1f40
#define public_62f1f5c _public_62f1f5c
#define public_62f1f7b _public_62f1f7b
#define public_62f1f9b _public_62f1f9b

PROC_DECLARE(0x62f1f00, internal_62f1f00, public_62f1f00);
extern "C" NAKED register_t __cdecl internal_62f1f00()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62f1f2d
        public_62f1f18 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_6271cc0
        cmp esi, ebx
        jne public_62f1f18
        public_62f1f2d : nop
        xor ebp, ebp
        nop 
        public_62f1f30 : nop
        test ebp, ebp
        jne public_62f1f3d
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [ecx+0x5C]
        jmp public_62f1f40
        public_62f1f3d : nop
        mov ebp, dword ptr ss : [ebp]
        public_62f1f40 : nop
        test ebp, ebp
        je public_62f1f9b
        mov esi, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_62f1f5c
        mov ebx, eax
        public_62f1f5c : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_62f1f7b
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_62f1f7b : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        inc edx
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [eax+4]
        mov cx, word ptr ss : [ebp+4]
        add eax, 8
        mov word ptr ds : [eax], cx
        mov dword ptr ds : [eax+4], 0x3F800000
        jmp public_62f1f30
        public_62f1f9b : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62f1f00)
    }
}

#undef public_62f1f18
#undef public_62f1f2d
#undef public_62f1f30
#undef public_62f1f3d
#undef public_62f1f40
#undef public_62f1f5c
#undef public_62f1f7b
#undef public_62f1f9b

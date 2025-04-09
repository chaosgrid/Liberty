#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564280);
CLANG_FORWARD_PROC_SYMBOL(public_57bff0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3edb);

#define public_57c022 _public_57c022
#define public_57c040 _public_57c040
#define public_57c064 _public_57c064
#define public_57c0b8 _public_57c0b8
#define public_57c0ba _public_57c0ba
#define public_57c0c0 _public_57c0c0

PROC_DECLARE(0x57bff0, internal_57bff0, public_57bff0);
extern "C" NAKED register_t __cdecl internal_57bff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3edb @0x57bff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3edb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x4C8]
        push ebp
        mov ebp, dword ptr ds : [ebx+0x4CC]
        cmp ebp, ebp
        push esi
        mov dword ptr ss : [esp+0xC], ebp
        je public_57c064
        sub ebp, eax
        push edi
        public_57c022 : nop
        mov ecx, dword ptr ds : [eax+ebp]
        lea edx, ds:[eax+ebp]
        mov dword ptr ds : [eax], ecx
        mov cx, word ptr ds : [edx]
        mov esi, edx
        mov edi, 0xFFFFFFFE
        mov word ptr ds : [eax], cx
        sub esi, eax
        lea ecx, ds:[eax+2]
        sub edi, eax
        mov edi, edi
        public_57c040 : nop
        mov dl, byte ptr ds : [esi+ecx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        lea edx, ds:[edi+ecx]
        cmp edx, 2
        jb public_57c040
        mov ecx, dword ptr ds : [eax+ebp+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        add eax, 0xC
        lea edx, ds:[eax+ebp]
        cmp edx, ecx
        jne public_57c022
        pop edi
        public_57c064 : nop
        mov dword ptr ds : [ebx+0x4CC], eax
        xor esi, esi
        mov ecx, ebx
        mov dword ptr ds : [ebx+0x4A4], esi
        mov dword ptr ds : [ebx+0x4A0], esi
        mov dword ptr ds : [ebx+0x49C], esi
        call public_57d330
        mov ecx, dword ptr ds : [ebx+0x52C]
        cmp ecx, esi
        je public_57c0c0
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        push 0xA0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], esi
        je public_57c0b8
        push ebx
        mov ecx, eax
        call public_564280
        jmp public_57c0ba
        public_57c0b8 : nop
        xor eax, eax
        public_57c0ba : nop
        mov dword ptr ds : [ebx+0x52C], eax
        public_57c0c0 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x57bff0)
    }
}

#undef public_57c022
#undef public_57c040
#undef public_57c064
#undef public_57c0b8
#undef public_57c0ba
#undef public_57c0c0

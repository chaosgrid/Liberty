#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6263fa6 _public_6263fa6
#define public_6263fbb _public_6263fbb
#define public_6264004 _public_6264004
#define public_6264016 _public_6264016

PROC_DECLARE(0x6263f70, internal_6263f70, public_6263f70);
extern "C" NAKED register_t __cdecl internal_6263f70()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        push 0x28
        mov byte ptr ds : [edi], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6264016
        push ebp
        public_6263fa6 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6263fbb
        mov ebp, eax
        public_6263fbb : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6264004
        mov dl, byte ptr ds : [esi+8]
        mov byte ptr ds : [eax], dl
        mov cx, word ptr ds : [esi+0xA]
        mov word ptr ds : [eax+2], cx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov dl, byte ptr ds : [esi+0x14]
        mov byte ptr ds : [eax+0xC], dl
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0x14], edx
        mov cl, byte ptr ds : [esi+0x20]
        mov byte ptr ds : [eax+0x18], cl
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+0x1C], edx
        public_6264004 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6263fa6
        pop ebp
        public_6264016 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6263f70)
    }
}

#undef public_6263fa6
#undef public_6263fbb
#undef public_6264004
#undef public_6264016

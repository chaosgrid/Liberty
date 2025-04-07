#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60cc6);

#define public_6cfc0d4 _public_6cfc0d4
#define public_6cfc0d6 _public_6cfc0d6
#define public_6cfc195 _public_6cfc195
#define public_6cfc1a9 _public_6cfc1a9
#define public_6cfc1c9 _public_6cfc1c9
#define public_6cfc1cb _public_6cfc1cb

PROC_DECLARE(0x6cfc020, internal_6cfc020, public_6cfc020);
extern "C" NAKED register_t __cdecl internal_6cfc020()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov cl, byte ptr ds : [public_6d8d928]
        push 0xFFFFFFFF
/*FIXUP push public_6d60cc6 @0x6cfc02e*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60cc6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        xor ebx, ebx
        cmp cl, bl
        push ebp
        mov eax, 0xFFFFFFFB
        jne public_6cfc1cb
        fld dword ptr ss : [esp+0x60]
        mov ecx, 0xFFFFFFFC
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cfc1c9
        mov ebp, dword ptr ss : [esp+0x5C]
        test ebp, 0x3FFFFFFF
        je public_6cfc1c9
        push esi
        push edi
        push 0x28
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x64], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x5C], ebx
        je public_6cfc0d4
        mov al, byte ptr ss : [esp+0x68]
        push 0xC
        mov byte ptr ds : [esi+4], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], ebx
        mov cl, byte ptr ss : [esp+0x68]
        lea edi, ds:[esi+0x10]
        push ebx
        mov byte ptr ds : [edi], cl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0x64], 1
        call public_6cfc340
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [esi], offset public_6d66b8c
        jmp public_6cfc0d6
        public_6cfc0d4 : nop
        xor esi, esi
        public_6cfc0d6 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ss : [esp+0x68]
        lea ecx, ds:[esi+0x20]
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        mov dword ptr ss : [esp+0x10], ebp
        mov byte ptr ss : [esp+0x14], 1
        mov dword ptr ss : [esp+0x4C], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x50], esi
        push ecx
        mov dword ptr ds : [esi+0x1C], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x24], ebp
        call dword ptr ds : [public_6d64448]
        mov ecx, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ecx], esi
        mov edi, dword ptr ds : [public_6d8d8f8]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_6d60012
        add esp, 0x10
        cmp ebp, ebx
        mov dword ptr ds : [eax], edi
        jne public_6cfc195
        mov ebp, eax
        public_6cfc195 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        cmp eax, ebx
        je public_6cfc1a9
        mov dword ptr ds : [eax], esi
        public_6cfc1a9 : nop
        mov eax, dword ptr ds : [public_6d8d8fc]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [public_6d8d8fc], eax
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        public_6cfc1c9 : nop
        mov eax, ecx
        public_6cfc1cb : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6cfc020)
    }
}

#undef public_6cfc0d4
#undef public_6cfc0d6
#undef public_6cfc195
#undef public_6cfc1a9
#undef public_6cfc1c9
#undef public_6cfc1cb

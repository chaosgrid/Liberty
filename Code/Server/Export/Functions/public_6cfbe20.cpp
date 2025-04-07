#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60cc6);

#define public_6cfbeff _public_6cfbeff
#define public_6cfbf01 _public_6cfbf01
#define public_6cfbf89 _public_6cfbf89
#define public_6cfbf9d _public_6cfbf9d
#define public_6cfbfbd _public_6cfbfbd
#define public_6cfbfbf _public_6cfbfbf

PROC_DECLARE(0x6cfbe20, internal_6cfbe20, public_6cfbe20);
extern "C" NAKED register_t __cdecl internal_6cfbe20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov cl, byte ptr ds : [public_6d8d928]
        push 0xFFFFFFFF
/*FIXUP push public_6d60cc6 @0x6cfbe2e*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60cc6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        test cl, cl
        push ebx
        mov eax, 0xFFFFFFFB
        jne public_6cfbfbf
        mov edx, dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [edx]
        mov ecx, 0xFFFFFFFC
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cfbfbd
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cfbfbd
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6cfbfbd
        mov ebx, dword ptr ss : [esp+0x58]
        test ebx, 0x3FFFFFFF
        je public_6cfbfbd
        push ebp
        push esi
        push edi
        push 0x28
        call public_6d60012
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x64], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x5C], edi
        je public_6cfbeff
        mov al, byte ptr ss : [esp+0x68]
        push 0xC
        mov byte ptr ss : [ebp+4], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], edi
        mov cl, byte ptr ss : [esp+0x68]
        lea esi, ss:[ebp+0x10]
        push edi
        mov byte ptr ds : [esi], cl
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x64], 1
        call public_6cfc340
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ss : [ebp], offset public_6d66b8c
        jmp public_6cfbf01
        public_6cfbeff : nop
        xor ebp, ebp
        public_6cfbf01 : nop
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov esi, dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ss : [esp+0x68]
        mov byte ptr ss : [esp+0x15], 0
        mov byte ptr ss : [esp+0x16], 0
        mov dword ptr ss : [esp+0x10], ebx
        mov byte ptr ss : [esp+0x14], 1
        mov ecx, 9
        lea edi, ss:[esp+0x2C]
        rep movsd
        lea ecx, ss:[ebp+0x20]
        mov dword ptr ss : [esp+0x50], ebp
        push ecx
        mov dword ptr ss : [ebp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x24], ebx
        call dword ptr ds : [public_6d64508]
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [ecx], ebp
        mov esi, dword ptr ds : [public_6d8d8f8]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 0x10
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6cfbf89
        mov edi, eax
        public_6cfbf89 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6cfbf9d
        mov dword ptr ds : [eax], ebp
        public_6cfbf9d : nop
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
        public_6cfbfbd : nop
        mov eax, ecx
        public_6cfbfbf : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6cfbe20)
    }
}

#undef public_6cfbeff
#undef public_6cfbf01
#undef public_6cfbf89
#undef public_6cfbf9d
#undef public_6cfbfbd
#undef public_6cfbfbf

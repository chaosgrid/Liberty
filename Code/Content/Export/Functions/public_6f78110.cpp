#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f78110);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7813e _public_6f7813e
#define public_6f78146 _public_6f78146
#define public_6f7816e _public_6f7816e
#define public_6f7819d _public_6f7819d
#define public_6f781a2 _public_6f781a2
#define public_6f781b4 _public_6f781b4
#define public_6f78234 _public_6f78234
#define public_6f78275 _public_6f78275
#define public_6f78290 _public_6f78290
#define public_6f782a5 _public_6f782a5
#define public_6f782b4 _public_6f782b4
#define public_6f782c1 _public_6f782c1
#define public_6f782cc _public_6f782cc

PROC_DECLARE(0x6f78110, internal_6f78110, public_6f78110);
extern "C" NAKED register_t __cdecl internal_6f78110()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+0xF8]
        push edi
        mov ecx, esi
        call public_6fa7200
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6f7813e
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6f7813e
        lea eax, ss:[esp+0x14]
        jmp public_6f78146
        public_6f7813e : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6f78146 : nop
        mov edx, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [edx], 1
        mov eax, dword ptr ds : [eax]
        jne public_6f7816e
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx+0x60]
        push eax
        add ecx, 0x58
        push 1
        push edx
        call public_6f937c0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_6f7816e : nop
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0x70]
        mov ecx, dword ptr ds : [esi+0x74]
        add esi, 0x68
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6f78234
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f7819d
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        mov ebx, eax
        ja public_6f781a2
        public_6f7819d : nop
        mov ebx, 1
        public_6f781a2 : nop
        push ebp
        mov ecx, esi
        call public_6fa3db0
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_6f781b4
        xor eax, eax
        public_6f781b4 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6f38a50
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[ebx+ebp*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6fa3db0
        pop ebp
        lea edx, ds:[ebx+eax*4+4]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_6f78234 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f78290
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f782cc
        public_6f78275 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f78275
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_6f78290 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f782b4
        public_6f782a5 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f782a5
        public_6f782b4 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f782cc
        mov edx, dword ptr ss : [esp+0x1C]
        public_6f782c1 : nop
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], edi
        add eax, 4
        cmp eax, ecx
        jne public_6f782c1
        public_6f782cc : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f78110)
    }
}

#undef public_6f7813e
#undef public_6f78146
#undef public_6f7816e
#undef public_6f7819d
#undef public_6f781a2
#undef public_6f781b4
#undef public_6f78234
#undef public_6f78275
#undef public_6f78290
#undef public_6f782a5
#undef public_6f782b4
#undef public_6f782c1
#undef public_6f782cc

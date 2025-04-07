#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282520);
CLANG_FORWARD_PROC_SYMBOL(public_62bbbb0);

#define public_6282548 _public_6282548
#define public_6282597 _public_6282597
#define public_6282599 _public_6282599
#define public_62825a5 _public_62825a5
#define public_62825e0 _public_62825e0
#define public_62825f9 _public_62825f9

PROC_DECLARE(0x6282520, internal_6282520, public_6282520);
extern "C" NAKED register_t __cdecl internal_6282520()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+8], ecx
        je public_62825f9
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], eax
        je public_62825a5
        public_6282548 : nop
        cmp edi, eax
        je public_62825e0
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[edi+8]
        call public_62bbbb0
        test al, al
        je public_6282597
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [edx+4], ecx
        mov edi, eax
        jmp public_6282599
        public_6282597 : nop
        mov esi, dword ptr ds : [esi]
        public_6282599 : nop
        cmp esi, ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        jne public_6282548
        public_62825a5 : nop
        cmp edi, eax
        je public_62825e0
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edx], ebx
        mov edx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+4], esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], edx
        lea ebx, ds:[ebx]
        public_62825e0 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [ecx+8]
        add esi, edx
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        mov dword ptr ds : [eax+8], 0
        pop ebx
        public_62825f9 : nop
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6282520)
    }
}

#undef public_6282548
#undef public_6282597
#undef public_6282599
#undef public_62825a5
#undef public_62825e0
#undef public_62825f9

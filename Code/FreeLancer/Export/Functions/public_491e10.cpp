#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_476fe0);
CLANG_FORWARD_PROC_SYMBOL(public_491e10);

#define public_491e59 _public_491e59
#define public_491eb0 _public_491eb0
#define public_491ed1 _public_491ed1
#define public_491eda _public_491eda
#define public_491f22 _public_491f22
#define public_491f66 _public_491f66

PROC_DECLARE(0x491e10, internal_491e10, public_491e10);
extern "C" NAKED register_t __cdecl internal_491e10()
{
    __asm
    {
        sub esp, 0x130
        mov eax, dword ptr ds : [ecx+0x838]
        cmp eax, dword ptr ss : [esp+0x138]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jne public_491e59
        mov eax, dword ptr ss : [esp+0x144]
        add ecx, 0x83C
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        pop edi
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 0x130
        ret 0xC
        public_491e59 : nop
        mov edi, dword ptr ss : [esp+0x14C]
        xor ebx, ebx
        cmp edi, ebx
        je public_491f66
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ss : [esp+0x84], ebx
        mov byte ptr ss : [esp+0x88], bl
        mov dword ptr ss : [esp+0xB4], ebx
        mov byte ptr ss : [esp+0xB8], bl
        mov dword ptr ss : [esp+0xF8], ebx
        mov byte ptr ss : [esp+0xFC], bl
        call dword ptr ds : [edx+0x3C]
        xor esi, esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jbe public_491eda
        lea ecx, ds:[ecx]
        public_491eb0 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        push ecx
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x40]
        test al, al
        je public_491ed1
        mov ebp, dword ptr ss : [esp+0x148]
        cmp dword ptr ss : [esp+0xA8], ebp
        je public_491f22
        public_491ed1 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        jb public_491eb0
        public_491eda : nop
        mov edx, dword ptr ss : [esp+0x148]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        call public_476fe0
        add esp, 0xC
        test al, al
        je public_491f66
        mov eax, dword ptr ss : [esp+0x144]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0x130
        ret 0xC
        public_491f22 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov esi, dword ptr ss : [esp+0x74]
        lea edx, ds:[eax+0x83C]
        mov edi, edx
        mov edx, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [eax+0x838], ebp
        mov eax, dword ptr ss : [esp+0x144]
        mov dword ptr ds : [edi+8], esi
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x130
        ret 0xC
        public_491f66 : nop
        mov eax, dword ptr ss : [esp+0x144]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        pop ebx
        add esp, 0x130
        ret 0xC
        UNREACHABLE_TRAP(0x491e10)
    }
}

#undef public_491e59
#undef public_491eb0
#undef public_491ed1
#undef public_491eda
#undef public_491f22
#undef public_491f66

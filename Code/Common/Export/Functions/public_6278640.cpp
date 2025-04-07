#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_6278640);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62786b9 _public_62786b9
#define public_62786bb _public_62786bb
#define public_62786f3 _public_62786f3
#define public_62786f8 _public_62786f8
#define public_6278709 _public_6278709
#define public_627877e _public_627877e
#define public_62787c0 _public_62787c0
#define public_62787db _public_62787db
#define public_62787f0 _public_62787f0
#define public_62787ff _public_62787ff
#define public_6278808 _public_6278808
#define public_6278815 _public_6278815

PROC_DECLARE(0x6278640, internal_6278640, public_6278640);
extern "C" NAKED register_t __cdecl internal_6278640()
{
    __asm
    {
        sub esp, 0x14
        push esi
        push edi
        push 0xA8
        mov esi, ecx
        call public_6391d9c
        xor edx, edx
        add esp, 4
        cmp eax, edx
        je public_62786b9
        mov edi, edx
        mov ecx, eax
        mov dword ptr ds : [ecx], edi
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x28], edx
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x20], edx
        mov dword ptr ds : [eax+0x18], edx
        mov dword ptr ds : [eax+0x14], edx
        mov dword ptr ds : [eax+0x10], edx
        lea ecx, ds:[eax+0x30]
        mov dword ptr ds : [ecx], edi
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ds : [ecx+8], edi
        mov byte ptr ds : [eax+0xA4], dl
        jmp public_62786bb
        public_62786b9 : nop
        xor eax, eax
        public_62786bb : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_627877e
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edx
        push ebx
        push ebp
        je public_62786f3
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_62786f3
        mov ecx, esi
        call public_626a600
        mov ebx, eax
        jmp public_62786f8
        public_62786f3 : nop
        mov ebx, 1
        public_62786f8 : nop
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_6278709
        xor eax, eax
        public_6278709 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_627f7b0
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_627f7e0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        lea edx, ds:[ebx+ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_626a600
        pop ebp
        lea eax, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        pop ebx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 0x14
        ret 
        public_627877e : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_62787db
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+8]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6278815
        nop 
        public_62787c0 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_62787c0
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 0x14
        ret 
        public_62787db : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_62787ff
        public_62787f0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_62787f0
        public_62787ff : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6278815
        public_6278808 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6278808
        public_6278815 : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ss : [esp+8]
        pop edi
        pop esi
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6278640)
    }
}

#undef public_62786b9
#undef public_62786bb
#undef public_62786f3
#undef public_62786f8
#undef public_6278709
#undef public_627877e
#undef public_62787c0
#undef public_62787db
#undef public_62787f0
#undef public_62787ff
#undef public_6278808
#undef public_6278815

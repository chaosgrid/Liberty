#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805730);
CLANG_FORWARD_PROC_SYMBOL(public_6805810);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_6805767 _public_6805767
#define public_6805777 _public_6805777
#define public_68057ae _public_68057ae
#define public_68057c5 _public_68057c5
#define public_68057ce _public_68057ce
#define public_68057d8 _public_68057d8
#define public_68057e8 _public_68057e8

PROC_DECLARE(0x6805730, internal_6805730, public_6805730);
extern "C" NAKED register_t __cdecl internal_6805730()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebp
        call public_6805810
        mov esi, eax
        lea eax, ds:[esi*4]
        push eax
        push 0
        call public_68065d0
        add esp, 0xC
        test esi, esi
        mov ebx, eax
        mov dword ptr ss : [esp+0x10], ebx
        jle public_6805767
        mov ecx, esi
        xor eax, eax
        mov edi, ebx
        rep stosd
        public_6805767 : nop
        mov eax, dword ptr ss : [ebp]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [esp+0x14], edi
        jle public_68057e8
        public_6805777 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [eax+edi*4]
        test ebx, ebx
        je public_68057d8
        cmp ebx, offset public_680d810
        je public_68057d8
        mov ecx, dword ptr ds : [ebx+8]
        xor edx, edx
        mov eax, ecx
        div esi
        mov eax, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [eax+edx*4], 0
        lea eax, ds:[eax+edx*4]
        je public_68057ce
        lea edi, ds:[esi-2]
        and edi, ecx
        lea ecx, ds:[edi+1]
        lea edi, ds:[ecx*4]
        public_68057ae : nop
        add edx, ecx
        add eax, edi
        cmp edx, esi
        jl public_68057c5
        lea ebp, ds:[esi*4]
        sub edx, esi
        sub eax, ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        public_68057c5 : nop
        cmp dword ptr ds : [eax], 0
        jne public_68057ae
        mov edi, dword ptr ss : [esp+0x14]
        public_68057ce : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+edx*4], ebx
        inc dword ptr ss : [ebp+4]
        public_68057d8 : nop
        mov eax, dword ptr ss : [ebp]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x14], edi
        jl public_6805777
        mov ebx, dword ptr ss : [esp+0x10]
        public_68057e8 : nop
        mov edx, dword ptr ss : [ebp+8]
        push 0
        push edx
        call public_68065d0
        add esp, 8
        pop edi
        mov dword ptr ss : [ebp], esi
        pop esi
        mov dword ptr ss : [ebp+8], ebx
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6805730)
    }
}

#undef public_6805767
#undef public_6805777
#undef public_68057ae
#undef public_68057c5
#undef public_68057ce
#undef public_68057d8
#undef public_68057e8

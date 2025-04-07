#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ebb0);
CLANG_FORWARD_PROC_SYMBOL(public_638e540);
CLANG_FORWARD_PROC_SYMBOL(public_638ffb0);

#define public_638ffff _public_638ffff
#define public_639000f _public_639000f
#define public_639001d _public_639001d
#define public_6390023 _public_6390023
#define public_6390027 _public_6390027
#define public_6390061 _public_6390061
#define public_6390073 _public_6390073
#define public_6390099 _public_6390099
#define public_63900a9 _public_63900a9
#define public_63900f5 _public_63900f5

PROC_DECLARE(0x638ffb0, internal_638ffb0, public_638ffb0);
extern "C" NAKED register_t __cdecl internal_638ffb0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ebx+0x34]
        mov eax, dword ptr ds : [ecx+4]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [edx+8]
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edx+4]
        cmp eax, ecx
        mov edx, dword ptr ds : [ebx+0x3C]
        mov ebx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x10], ebx
        mov ebx, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x18], ebp
        jne public_638ffff
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, ebp
        mov dword ptr ss : [esp+0x24], edx
        jmp public_6390027
        public_638ffff : nop
        cmp eax, ebp
        jne public_639000f
        mov dword ptr ss : [esp+0x24], ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        jmp public_6390027
        public_639000f : nop
        cmp edi, ecx
        mov edi, eax
        jne public_639001d
        mov eax, ebp
        mov dword ptr ss : [esp+0x24], edx
        jmp public_6390023
        public_639001d : nop
        mov eax, ecx
        mov dword ptr ss : [esp+0x24], ebx
        public_6390023 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6390027 : nop
        mov edx, dword ptr ds : [eax+0x14]
        mov ebp, dword ptr ds : [edi+0x14]
        and edx, 0xFFFFFF
        and ebp, 0xFFFFFF
        cmp ebp, edx
        jbe public_6390073
        cmp eax, ecx
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edx+4], edi
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edx+8], eax
        jne public_6390061
        mov eax, dword ptr ds : [esi+0x50]
        mov ecx, eax
        not ecx
        xor ecx, eax
        and ecx, 0x800
        xor ecx, eax
        mov dword ptr ds : [esi+0x50], ecx
        public_6390061 : nop
        mov edx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [ecx+8], ebx
        jmp public_63900a9
        public_6390073 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [ecx+4], eax
        cmp eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edx+8], edi
        jne public_6390099
        mov eax, dword ptr ds : [esi+0x50]
        mov ecx, eax
        not ecx
        xor ecx, eax
        and ecx, 0x800
        xor ecx, eax
        mov dword ptr ds : [esi+0x50], ecx
        public_6390099 : nop
        mov edx, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+4], ebx
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax+8], ecx
        public_63900a9 : nop
        push ebx
        call public_638e540
        mov ebp, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ebx+0x3C]
        push esi
        push ebp
        push edx
        call public_636ebb0
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 4
        jl public_63900f5
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ds : [ebx+0x4C]
        push eax
        mov eax, dword ptr ds : [edi+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fb254 @0x63900e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb254
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_63900f5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x638ffb0)
    }
}

#undef public_638ffff
#undef public_639000f
#undef public_639001d
#undef public_6390023
#undef public_6390027
#undef public_6390061
#undef public_6390073
#undef public_6390099
#undef public_63900a9
#undef public_63900f5

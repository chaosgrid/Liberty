#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b1f30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4b1f75 _public_4b1f75
#define public_4b1f77 _public_4b1f77
#define public_4b1f90 _public_4b1f90
#define public_4b1fab _public_4b1fab
#define public_4b1fb8 _public_4b1fb8
#define public_4b1fc3 _public_4b1fc3
#define public_4b1fd0 _public_4b1fd0
#define public_4b2037 _public_4b2037
#define public_4b2062 _public_4b2062
#define public_4b209e _public_4b209e
#define public_4b20b3 _public_4b20b3
#define public_4b20b5 _public_4b20b5
#define public_4b20b9 _public_4b20b9
#define public_4b20d7 _public_4b20d7
#define public_4b20ed _public_4b20ed
#define public_4b2127 _public_4b2127

PROC_DECLARE(0x4b1f30, internal_4b1f30, public_4b1f30);
extern "C" NAKED register_t __cdecl internal_4b1f30()
{
    __asm
    {
        sub esp, 0x38
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x32E]
        test al, al
        jne public_4b2127
        mov eax, dword ptr ss : [ebp+0x8B8]
        mov ecx, dword ptr ss : [ebp+0x330]
        push ebx
        xor bl, bl
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3E], bl
        jne public_4b1f75
        mov cl, byte ptr ss : [ebp+0x8BC]
        cmp cl, byte ptr ss : [ebp+0x334]
        je public_4b1f77
        public_4b1f75 : nop
        mov bl, 1
        public_4b1f77 : nop
        xor edx, edx
        lea eax, ss:[ebp+0x5E4]
        push esi
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0xC], eax
        push edi
        lea esp, ss:[esp]
        public_4b1f90 : nop
        test bl, bl
        jne public_4b20d7
        mov eax, dword ptr ss : [ebp+0x7F4]
        cmp eax, 1
        jne public_4b1fab
        mov esi, dword ptr ss : [ebp+0x508]
        jmp public_4b1fc3
        public_4b1fab : nop
        cmp eax, 2
        jne public_4b1fb8
        mov esi, dword ptr ss : [ebp+0x548]
        jmp public_4b1fc3
        public_4b1fb8 : nop
        cmp eax, 3
        jne public_4b1fd0
        mov esi, dword ptr ss : [ebp+0x528]
        public_4b1fc3 : nop
        add esi, edx
        lea edi, ss:[esp+0x30]
        mov ecx, 6
        rep movsd
        public_4b1fd0 : nop
        mov al, byte ptr ss : [esp+0x46]
        test al, al
        jne public_4b20b9
        mov al, byte ptr ss : [esp+0x44]
        test al, al
        je public_4b2037
        cmp dword ptr ss : [esp+0x30], 0x536
        je public_4b20b9
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0x70]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3B
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], 0
        fild qword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x1D4]
        call public_5b7ec0
        mov esi, eax
        call public_5b7ec0
        cmp esi, eax
        je public_4b20b5
        jmp public_4b20b3
        public_4b2037 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        test byte ptr ds : [ecx+0x6C], 2
        je public_4b20b9
        mov esi, dword ptr ss : [esp+0x30]
        cmp esi, dword ptr ss : [esp+0x4C]
        jne public_4b2062
        fld dword ptr ds : [eax+0x1D4]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 0x44
        jp public_4b20b9
        mov bl, 1
        jmp public_4b20b9
        public_4b2062 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x20]
        push eax
        push 0x2F
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x28], ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        fild qword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], 1
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 0x41
        je public_4b209e
        mov dword ptr ss : [esp+0x18], ecx
        public_4b209e : nop
        fild dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [edx+0x1D4]
        fnstsw ax
        test ah, 0x44
        jnp public_4b20b5
        public_4b20b3 : nop
        mov bl, 1
        public_4b20b5 : nop
        mov edx, dword ptr ss : [esp+0x14]
        public_4b20b9 : nop
        mov esi, dword ptr ss : [esp+0x10]
        add edx, 0x18
        add esi, 4
        cmp edx, 0x150
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0x14], edx
        jl public_4b1f90
        public_4b20d7 : nop
        test bl, bl
        pop edi
        mov byte ptr ss : [ebp+0x848], bl
        mov eax, dword ptr ds : [public_679bb0]
        pop esi
        jne public_4b20ed
        mov eax, dword ptr ds : [public_679b94]
        public_4b20ed : nop
        mov ecx, dword ptr ss : [ebp+0x7AC]
        test bl, bl
        mov dword ptr ds : [ecx+0x348], eax
        mov eax, dword ptr ss : [ebp+0x7A8]
        sete dl
        mov byte ptr ds : [eax+0x37C], dl
        mov ebp, dword ptr ss : [ebp+0x7A8]
        mov al, byte ptr ss : [ebp+0x388]
        shl bl, 2
        xor bl, al
        and bl, 4
        xor bl, al
        mov byte ptr ss : [ebp+0x388], bl
        pop ebx
        public_4b2127 : nop
        pop ebp
        add esp, 0x38
        ret 8
        UNREACHABLE_TRAP(0x4b1f30)
    }
}

#undef public_4b1f75
#undef public_4b1f77
#undef public_4b1f90
#undef public_4b1fab
#undef public_4b1fb8
#undef public_4b1fc3
#undef public_4b1fd0
#undef public_4b2037
#undef public_4b2062
#undef public_4b209e
#undef public_4b20b3
#undef public_4b20b5
#undef public_4b20b9
#undef public_4b20d7
#undef public_4b20ed
#undef public_4b2127

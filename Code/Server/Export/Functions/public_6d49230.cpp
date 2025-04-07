#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1a90);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6d49230);
CLANG_FORWARD_PROC_SYMBOL(public_6d571a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57540);
CLANG_FORWARD_PROC_SYMBOL(public_6d57c70);

#define public_6d4929d _public_6d4929d
#define public_6d492b3 _public_6d492b3
#define public_6d49303 _public_6d49303
#define public_6d49311 _public_6d49311
#define public_6d4934c _public_6d4934c
#define public_6d4945d _public_6d4945d

PROC_DECLARE(0x6d49230, internal_6d49230, public_6d49230);
extern "C" NAKED register_t __cdecl internal_6d49230()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3D0]
        push edi
        lea edi, ds:[esi+0x3D0]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6d4929d
        mov eax, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x348]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+ecx-0x34]
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebp, ds:[esi+0x348]
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        call dword ptr ds : [edx+0x1B0]
        push ebp
        push edi
        mov ecx, offset public_6d90260
        call public_6ce1a90
        mov ecx, eax
        add ecx, 0x3D4
        call public_6d571a0
        mov dword ptr ds : [edi], ebx
        public_6d4929d : nop
        mov eax, dword ptr ds : [esi+0x3D8]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d49311
        mov edx, dword ptr ds : [public_6d90260]
        public_6d492b3 : nop
        mov eax, dword ptr ds : [ecx+8]
        imul eax, 0x418
        lea edi, ds:[eax+edx-0x418]
        mov eax, dword ptr ds : [edi+0x3D0]
        cmp eax, ebx
        je public_6d49303
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov ebp, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edi+0x348]
        imul ecx, 0x418
        mov edx, dword ptr ds : [ecx+edx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        push edx
        push eax
        call dword ptr ss : [ebp+0x1B0]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x3D0], ebx
        mov edx, dword ptr ds : [public_6d90260]
        public_6d49303 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [esi+0x3D8]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6d492b3
        public_6d49311 : nop
        mov eax, dword ptr ds : [esi+0x3D8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x3D4]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6cf7720
        mov eax, dword ptr ds : [esi+0x318]
        cmp eax, 0xFFFFFFFF
        lea edi, ds:[esi+0x318]
        je public_6d4934c
        push edi
        call dword ptr ds : [public_6d648e0]
        add esp, 4
        mov dword ptr ds : [edi], 0xFFFFFFFF
        public_6d4934c : nop
        mov eax, 0xCDCDCDCD
        mov ecx, 0x14
        mov edi, esi
        rep stosd
        lea ecx, ds:[esi+0x50]
        call public_6d57c70
        mov dword ptr ds : [esi+0x264], ebx
        mov dword ptr ds : [esi+0x268], ebx
        mov eax, dword ptr ds : [esi+0x27C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x278]
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [public_6d64884]
        mov eax, dword ptr ds : [esi+0x270]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x26C]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6d643a8]
        mov eax, 0xCDCDCDCD
        mov ecx, 0xD
        lea edi, ds:[esi+0x28C]
        rep stosd
        mov dword ptr ds : [esi+0x2C0], ebx
        mov byte ptr ds : [esi+0x2C4], bl
        mov ecx, 0xD
        lea edi, ds:[esi+0x2E4]
        rep stosd
        mov dword ptr ds : [esi+0x358], ebx
        mov dword ptr ds : [esi+0x354], ebx
        mov dword ptr ds : [esi+0x350], ebx
        mov dword ptr ds : [esi+0x378], ebx
        mov dword ptr ds : [esi+0x374], ebx
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x368], ebx
        mov dword ptr ds : [esi+0x364], ebx
        mov dword ptr ds : [esi+0x360], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x37C], eax
        mov dword ptr ds : [esi+0x36C], eax
        mov dword ptr ds : [esi+0x35C], eax
        mov eax, dword ptr ds : [esi+0x400]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x31C], 0x29A
        mov dword ptr ds : [esi+0x334], ebx
        mov dword ptr ds : [esi+0x338], ebx
        mov dword ptr ds : [esi+0x33C], ebx
        mov byte ptr ds : [esi+0x340], bl
        mov dword ptr ds : [esi+0x344], ebx
        mov dword ptr ds : [esi+0x348], ebx
        mov byte ptr ds : [esi+0x34C], bl
        je public_6d4945d
        mov dword ptr ds : [eax+0x34], ebx
        public_6d4945d : nop
        lea ecx, ds:[esi+0x3C8]
        call dword ptr ds : [public_6d648dc]
/*FIXUP push offset public_6d6b444 @0x6d49469*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b444
        mov dword ptr ds : [esi+0x3E0], ebx
        mov dword ptr ds : [esi+0x3E4], ebx
        mov dword ptr ds : [esi+0x3E8], ebx
        mov dword ptr ds : [esi+0x3EC], ebx
        mov dword ptr ds : [esi+0x3F4], ebx
        mov dword ptr ds : [esi+0x3F0], ebx
        mov dword ptr ds : [esi+0x3F8], ebx
        mov dword ptr ds : [esi+0x3FC], ebx
        mov dword ptr ds : [esi+0x410], ebx
        call dword ptr ds : [public_6d643b4]
        mov dword ptr ds : [esi+0x414], eax
        add esp, 4
        mov byte ptr ds : [esi+0x64], bl
        mov dword ptr ds : [esi+0x404], ebx
        mov dword ptr ds : [esi+0x40C], ebx
        mov eax, dword ptr ds : [esi+0x3A4]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x3A0]
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6d57540
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d49230)
    }
}

#undef public_6d4929d
#undef public_6d492b3
#undef public_6d49303
#undef public_6d49311
#undef public_6d4934c
#undef public_6d4945d

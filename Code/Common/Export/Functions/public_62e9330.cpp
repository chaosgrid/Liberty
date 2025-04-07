#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9330);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395433);

#define public_62e9380 _public_62e9380
#define public_62e93b0 _public_62e93b0
#define public_62e93e0 _public_62e93e0
#define public_62e941a _public_62e941a

PROC_DECLARE(0x62e9330, internal_62e9330, public_62e9330);
extern "C" NAKED register_t __cdecl internal_62e9330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395433 @0x62e9332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395433
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, ds:[esi+8]
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [ebp], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [esp+0x1C], 1
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], 0x3F800000
        lea eax, ds:[esi+0x33]
        mov edx, 0x40
        mov ecx, 0x3FC00000
        mov edi, 0x3F000000
        nop 
        public_62e9380 : nop
        mov byte ptr ds : [eax-1], bl
        mov byte ptr ds : [eax], bl
        mov byte ptr ds : [eax+1], bl
        mov dword ptr ds : [eax+9], 0x40400000
        mov dword ptr ds : [eax+0xD], ecx
        mov dword ptr ds : [eax+0x11], edi
        mov dword ptr ds : [eax+0x15], ebx
        mov byte ptr ds : [eax+0x19], bl
        add eax, 0x20
        dec edx
        jne public_62e9380
        lea eax, ds:[esi+0x83B]
        mov edx, 0x40
        lea esp, ss:[esp]
        public_62e93b0 : nop
        mov byte ptr ds : [eax-1], bl
        mov byte ptr ds : [eax], bl
        mov byte ptr ds : [eax+1], bl
        mov dword ptr ds : [eax+9], 0x40400000
        mov dword ptr ds : [eax+0xD], ecx
        mov dword ptr ds : [eax+0x11], edi
        mov dword ptr ds : [eax+0x15], ebx
        mov byte ptr ds : [eax+0x19], bl
        add eax, 0x20
        dec edx
        jne public_62e93b0
        lea eax, ds:[esi+0x1098]
        mov edx, 0x10
        lea esp, ss:[esp]
        public_62e93e0 : nop
        mov byte ptr ds : [eax], bl
        mov dword ptr ds : [eax+4], ebx
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [eax+8], cx
        mov byte ptr ds : [eax+0x14], 1
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov byte ptr ds : [eax+0x15], bl
        add eax, 0x18
        dec edx
        jne public_62e93e0
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+0x1094], 1
        cmp dword ptr ss : [ebp], ebx
        je public_62e941a
        push ebx
        mov ecx, ebp
        call public_6341610
        public_62e941a : nop
        mov eax, 0x40000000
        mov ebp, 0x3DC90FDB
        mov dword ptr ds : [esi+0x103C], edi
        mov dword ptr ds : [esi+0x1044], edi
        mov ecx, 0x3E99999A
        mov dword ptr ds : [esi+0x1064], edi
        mov edx, 0x40800000
        mov dword ptr ds : [esi+0x1050], eax
        mov dword ptr ds : [esi+0x1058], eax
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x830], ebx
        mov dword ptr ds : [esi+0x1088], ebx
        mov dword ptr ds : [esi+0x108C], ebp
        mov dword ptr ds : [esi+0x104C], ecx
        mov dword ptr ds : [esi+0x105C], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x107C], ebx
        mov dword ptr ds : [esi+0x1070], ebx
        mov dword ptr ds : [esi+0x1090], ebp
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x834], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x1040], 0x3E4CCCCD
        mov dword ptr ds : [esi+0x1048], edx
        mov dword ptr ds : [esi+0x1054], edx
        mov dword ptr ds : [esi+0x1060], 0x40400000
        mov dword ptr ds : [esi+0x1068], 0x40490FDB
        mov dword ptr ds : [esi+0x1074], 0x40A00000
        mov dword ptr ds : [esi+0x1078], 0x3EC90FDB
        mov dword ptr ds : [esi+0x1080], 0x3D4CCCCD
        mov dword ptr ds : [esi+0x1084], 0x44898000
        mov dword ptr ds : [esi+0x106C], 0x44480000
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62e9330)
    }
}

#undef public_62e9380
#undef public_62e93b0
#undef public_62e93e0
#undef public_62e941a
